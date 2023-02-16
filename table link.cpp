<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Table</title>
    <style>
        * {
            background-color: green;
        }

        table {
            width: 100%;

        }

        td {
            text-align: center;
            color: white;
        }

        .red {
            background-color: red;
        }

        .black {
            background-color: black;
        }
    </style>
</head>

<body>
    <div>
        <center>
            <caption>
                <h1>European Roulette</h1>
            </caption>
            <table border="1px" bordercolor="white" cellspacing="0px" cellpadding="5px">
                <tbody>
                    <tr class="a">
                        <td rowspan="5">0</td>
                        <td class="red">3</td>
                        <td class="black">6</td>
                        <td class="red">9</td>
                        <td class="red">12</td>
                        <td class="black">15</td>
                        <td class="red">18</td>
                        <td class="red">21</td>
                        <td class="black">24</td>
                        <td class="red">27</td>
                        <td class="red">30</td>
                        <td class="black">33</td>
                        <td class="red">36</td>
                        <td>2to1</td>
                    </tr>
                    <tr>
                        <td class="black">2</td>
                        <td class="red">5</td>
                        <td class="black">8</td>
                        <td class="black">11</td>
                        <td class="red">14</td>
                        <td class="black">17</td>
                        <td class="black">20</td>
                        <td class="red">23</td>
                        <td class="black">26</td>
                        <td class="black">29</td>
                        <td class="red">32</td>
                        <td class="black">35</td>
                        <td>2to1</td>
                    </tr>
                    <tr>
                        <td class="red">1</td>
                        <td class="black">4</td>
                        <td class="red">7</td>
                        <td class="black">10</td>
                        <td class="black">13</td>
                        <td class="red">16</td>
                        <td class="red">19</td>
                        <td class="black">22</td>
                        <td class="red">25</td>
                        <td class="black">28</td>
                        <td class="black">31</td>
                        <td class="red">34</td>
                        <td>2to1</td>
                    </tr>
                    <tr>
                        <td colspan="4">1st12</td>
                        <td colspan="4">2nd12</td>
                        <td colspan="4">3rd12</td>
                        <td rowspan="2"></td>
                    </tr>
                    <tr>
                        <td colspan="2">1to18</td>
                        <td colspan="2">Even</td>
                        <td colspan="2" class="red"></td>
                        <td colspan="2" class="black"></td>
                        <td colspan="2">Odd</td>
                        <td colspan="2">19to36</td>
                    </tr>


                </tbody>
            </table>
        </center>
    </div>
</body>

</html>
