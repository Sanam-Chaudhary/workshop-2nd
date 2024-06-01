<?php
//include_once('common/header.php');
//require_once('common/header.php');
include('common/header.php');
?>
<br>
<form action="" method="post">
    <fieldset>
        <legend>Login_Form</legend>
        <div class="required">
            Username <input class="text" type="text" name="username" id="username">
        </div><br>
        <div class="required">
            Password <input class="text" type="password" name="password" id="password">
        </div>
        <input type="submit" value="login">
    </fieldset>
</form>
<br>
Don't have account: <a href="signup.php">signup</a>
</body>

</html>