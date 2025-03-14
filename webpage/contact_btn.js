// script.js
const contactForm = document.getElementById('contactForm');

contactForm.addEventListener('submit', (e) => {
    e.preventDefault(); // Prevent form submission

    // Validate form fields (you can add more checks)
    const fullName = document.getElementById('fullName').value;
    const email = document.getElementById('email').value;
    const message = document.getElementById('message').value;

    if (!fullName || !email || !message) {
        alert('Please fill in all fields.');
        return;
    }

    // Submit form data (you can use AJAX or other methods)
    console.log('Form submitted:', { fullName, email, message });
});
