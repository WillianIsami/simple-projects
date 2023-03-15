<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $username = testing_input($_POST['username']);
    $email = testing_input($_POST['email']);
    $password = testing_input($_POST['password']);
}

function testing_input($data) {
    $data = trim($data);
    $data = stripslashes($data);
    $data = htmlspecialchars($data);
    return $data;
}

echo "Welcome $username";