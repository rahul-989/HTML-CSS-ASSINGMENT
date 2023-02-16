<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        caption {
            text-align: left;
        }
    </style>
</head>

<body>
    <h1>This is My First HTML page</h1>
    <hr>
    <h4>Top 10 IT Companies in India</h4>
    <ol>
        <li>Tata Consultancy Services</li>
        <li>Infosys</li>
        <li>HCL Technologires</li>
        <li>Wipro Limited</li>
        <li>Tech Mahindra</li>
        <li>Mphasis</li>
        <li>MindTree Ltd</li>
        <li>Aventure</li>
        <li>LTI</li>
        <li>Cognizant</li>
    </ol>
    <hr>
    <table>
        <caption>
            <font align="left">Dropdown lits
        </caption>
        <tr>

            <td><label>Select your favorite Car</label></td>

            <td><select name="Cars" id="cars">
                    <option value="Select cars">Select car</option>
                    <option value="Rolls Royce">Rolls Royce</option>
                    <option value="Mercedes Benz">Mercedes Benz</option>
                    <option value="Sudi">Audi</option>
                    <option value="BMW">BMW</option>
                    <option value="Bugati">Bugati</option>
            </td>
        </tr>

    </table>

    </select>
    <hr>
    <hr>

    <div>
        <caption>Time Table</caption>
        <table border="3px" cellpadding="5px" cellspacing="0px">
            <thead>
                <tr>
                    <th>Day/period</th>
                    <th>1 <br> 9:30-10:30</th>
                    <th>2 <br> 10:30-11:30</th>
                    <th>3 <br> 11:30-12:30</th>
                    <th> <br> 12:30-1:30</th>
                    <th>4 <br> 1:30-2:30</th>
                    <th>5 <br> 2:30-3:30</th>
                    <th>6 <br> 3:30-4:30</th>
                    <th>7 <br> 4:30-5:30</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>Monday</td>
                    <td>Eng</td>
                    <td>Math</td>
                    <td>Che</td>
                    <td rowspan="6">LUNCH</td>
                    <td colspan="3"> LAB</td>
                    <td>Phy</td>
                </tr>
                <tr>
                    <td>Tuesday</td>
                    <td colspan="3"> LAB</td>
                    <td>Eng</td>
                    <td>Che</td>
                    <td>Math</td>
                    <td>Sports</td>
                </tr>
                <tr>
                    <td>Wednesday</td>
                    <td>Math</td>
                    <td>Phy</td>
                    <td>Eng</td>
                    <td>Che</td>
                    <td colspan="3"> Library</td>
                </tr>
                <tr>
                    <td>Thursday</td>
                    <td>Phy</td>
                    <td>Eng</td>
                    <td>Che</td>
                    <td colspan="3"> LAB</td>
                    <td>Math</td>
                </tr>
                <tr>
                    <td>Friday</td>
                    <td colspan="3"> LAB</td>
                    <td>Math</td>
                    <td>Che</td>
                    <td>Eng</td>
                    <td>Phy</td>
                </tr>
                <tr>
                    <td>Saturday</td>
                    <td>Eng</td>
                    <td>Che</td>
                    <td>Math</td>
                    <td colspan="3"> Seminar</td>
                    <td>Sports</td>
                </tr>
            </tbody>
        </table>
    </div>

</body>

</html>
