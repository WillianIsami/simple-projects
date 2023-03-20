<?php
include 'config.php';
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My PHP Page</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <div id="container">
        <h1 style="text-align: center">Login</h1>
        <form action="home.php" method="post" class="forms">
            Username: <input type="text" name="username" id="username" required>
            Email: <input type="email" name="email" id="email" required>
            Passsword: <input type="password" name="password" id="pswd" required>
            <input type="submit" name="submit" id="submit">
        </form>
    </div>
</body>
</html>