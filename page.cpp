<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        * {
            background-color: lightblue;
        }
        td select,input{
            background-color: white;
            border: 1px solid black;
        }
    </style>
</head>

<body>
    <h4 style="color: red">User Particulare</h4>
    <center>
        <form method="post">
            <table>

                <tr>
                    <td><label><span style="color:red;">*</span>Login ID : </label></td>
                    <td><input type="text" name="login id" required></td>
                </tr>

                <tr>
                    <td><label><span style="color:red;">*</span>Password : </label></td>
                    <td><input type="password" name="password" required></td>
                </tr>

                <tr>
                    <td><label><span style="color:red;">*</span> Confirm Password : </label></td>
                    <td><input type="password" name="password" required></td>
                </tr>
            </table>
            <table>
                <h4 style="color: red; text-align: left;">Personal Particulare</h4>

                <tr>
                    <td><label><span style="color:red;">*</span>Salutation :</label></td>
                    <td><select>
                            <option>----select-----</option>
                        </select></td>

                    <td><label><span style="color:red;">*</span>First Name : </label></td>
                    <td><input type="text" name="fname" required></td>
                </tr>
                <tr>
                    <td><label><span style="color:red;">*</span>Middel Name : </label></td>
                    <td><input type="text" name="mname" required></td>
                    <td><label><span style="color:red;">*</span>Last Name : </label></td>
                    <td><input type="text" name="lname" required></td>
                </tr>
                <tr>
                    <td><label><span style="color:red;">*</span>Resident State :</label></td>
                    <td><select>
                            <option>----select-----</option>
                        </select></td>
                    <td><label><span style="color:red;">*</span>Country :</label></td>
                    <td><select>
                            <option>----select your country-----</option>
                            <option value="india">India</option>
                            <option value="Dubai">Dubai</option>
                        </select></td>
                </tr>
                <tr>
                    <td><label><span style="color :red">*</span>email :</label></td>
                    <td><input type="email" name="email"></td>
                    <td><label><span style="color :red">*</span>Mobile Number :</label></td>
                    <td><input type="text" name="Number"></td>
                </tr>
            </table>
            <table>

                <h4 style="color: red; text-align: left;">Account Particulare</h4>
                <tr>
                    <td><label><span style="color :red">*</span>15 Digit Account No :</label></td>
                    <td><input type="number" name="number"></td>
                    <td><label><span style="color :red">*</span>Nick Name :</label></td>
                    <td><input type="text" name="Number"></td>
                </tr>
                <tr>
                    <td><label><span style="color:red;">*</span>Fund Transfer :</label></td>
                    <td><select>
                            <option>----select-----</option>
                            <option>UPi</option>
                            <option>offline</option>
                            <option>NEFT</option>
                        </select></td>
            </table>
            <h5 style="color: red; text-align: left;">declaration</h5>
            <div>
                <p>
                    Lorem ipsum dolor sit amet, consectetur adipisicing elit. Cum, maxime fugit. Fugiat adipisci nostrumconsequuntur, dicta repellendus pariatur quasi cum.
                    Lorem ipsum dolor sit amet consectetur adipisicing elit. Fuga voluptates sapiente recusandae temporesimilique, quibusdam animi veritatis, saepe doloribus delectus incidunt dignissimos facere, dolorem.
                    Lorem ipsum dolor sit amet consectetur adipisicing elit. Hic rerum aliquid distinctio reprehenderit harum commodi non tempora ab iusto id eveniet itaque, mollitia alias quis sint perspiciatis tenetur deleniti ratione illum. Enim possimus necessitatibus aspernatur expedita blanditiis, asperiores ad nihil?
                </p>
            </div>
            <tr>
                <td><input type="submit" value="submit" ></td>
                <td><input type="reset" value="reset" ></td>
                </tr>
                    
        </form>
              <p> Note :<span style="color :red">*</span> indicate madatory fields</p>
    </center>
</body>

</html>

