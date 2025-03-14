document.getElementById('projectLink').addEventListener('click', function(event) {
    event.preventDefault(); // Prevent the default anchor behavior

    // Scroll to the Project section
    document.getElementById('Project_section').scrollIntoView({ behavior: 'smooth' });

    // Restart the animation
    restartAnimation();
});

function restartAnimation() {
    const rect1 = document.getElementById('fc1');
    const rect2 = document.getElementById('fc2');
    const rect3 = document.getElementById('fc3');

    // Remove the animation classes
    rect1.style.animation = 'none';
    rect2.style.animation = 'none';
    rect3.style.animation = 'none';

    // Trigger reflow to restart the animation
    void rect1.offsetWidth;
    void rect2.offsetWidth;
    void rect3.offsetWidth;

    // Add the animation classes back
    rect1.style.animation = '';
    rect2.style.animation = '';
    rect3.style.animation = '';
}
