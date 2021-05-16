<?php
$hostname = "localhost";
$username = "id16283228_kjo";
$password = "BkIl)^7g]&_DaO^>";
$dbname = "id16283228_class";
try {
    $conn = new PDO("mysql:host=$hostname; dbname=$dbname", $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    echo "Connected successfully"; 
    } catch(PDOException $e) {    
    echo "Connection failed: " . $e->getMessage();
    }
// $conn = mysqli_connect($hostname, $username, $password);
// if(mysql_connect_errno($conn)){
//     echo "db 연결 실패:" . mysql_connect_error();
//   }else{
//     echo "db 연결 성공";
//   }
//   $db_sec = mysqli_select_db($db_con, $dbname);
// if ($db_sec) {
//   echo "DB select OK <p>";
// } else {
//   echo "DB select NO <p>";
// }

mysqli_query($conn,'SET NAMES utf8');
$class1 = $_GET['class1'];
$class2 = $_GET['class2'];
$class3 = $_GET['class3'];
$class4 = $_GET['class4'];
$class5 = $_GET['class5'];
$class6 = $_GET['class6'];
$score = $_GET['score'];
$totaltime = $_GET['totaltime'];
$sql = "INSERT INTO `hccsdata` (class1, class2, class3, class4, class5, class6, score, totaltime) VALUES($class1, $class2, $class3, $class4, $class5, $class6, $score, $totaltime)";
$res = $conn->query($sql);
$row = $res->fetch_object();
?>
