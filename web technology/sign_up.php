<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <?php
    include('common/header.php');
    ?>
    <div class="container">
        <form action="" method="post">
            <fieldset>
                <legend>Sign_Up_Form</legend>
                <div>Username <input class="text" type="text" name="username" id="username"></div>
                <br>
                <div>Password <input class="text" type="password" name="password" id="password"></div>
                <br>
                <div>Email <input class="text" type="text" name="email" id="email"></div>
                <br>
                <div>DOB <input class="text" type="date" name="dob" id="dob"></div>
                <br>
                <input type="submit" value="signup">
                <button style="position: absolute; ">Goto Top</button>
            </fieldset>
        </form>
        <br>already have account: <a href="login.php">Login</a>
    </div>
</body>

</html>