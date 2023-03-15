<!DOCTYPE html>
<html>
<head>
	<title>My PHP Page</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <div id="container">
        <h1 style="text-align: center">Login</h1>
        <form action="./welcome/welcome.php" method="post" class="forms">
            Username: <input type="text" name="username" id="username" required>
            Email: <input type="email" name="email" id="email" required>
            Passsword: <input type="password" name="password" id="pswd" required>
            <input type="submit" name="submit" id="submit">
        </form>
    </div>
</body>
</html>