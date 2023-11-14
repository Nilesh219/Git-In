import requests
import pandas as pd

url = "https://alpha-vantage.p.rapidapi.com/query"

querystring = {
    "interval": "5min",
    "function": "TIME_SERIES_INTRADAY",
    "symbol": "MSFT",
    "datatype": "json",
    "output_size": "compact"
}

headers = {
    "X-RapidAPI-Key": "4a8e8035acmsh6e86a7677a9ca4ap155d49jsn7c9ce75831a2",
    "X-RapidAPI-Host": "alpha-vantage.p.rapidapi.com"
}

response = requests.get(url, headers=headers, params=querystring)

# Check if the response status code is 200 (OK)
if response.status_code == 200:
    data = response.json()
    # Extract the time series data
    time_series_data = data['Time Series (5min)']
    
    # Create a DataFrame
    df = pd.DataFrame.from_dict(time_series_data, orient='index')
    
    # Rename columns
    df = df.rename(columns={
        "1. open": "open",
        "2. high": "high",
        "3. low": "low",
        "4. close": "close",
        "5. volume": "volume"
    })
    
    # Convert the columns to numeric (they are strings by default)
    # df = df.apply(pd.to_numeric)
    
    # Display the first few rows of the DataFrame
    

    for i in range(1, 40):
        df = df.apply(pd.to_numeric)
    print(df)
        
else:
    print(f"Request failed with status code {response.status_code}")

df.shape

df.to_csv('SharMarket_Weekly_Trade.csv')
