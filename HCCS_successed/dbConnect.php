<?php
error_reporting(E_ALL);

ini_set("display_errors", 1);

$hostname = "localhost";
$username = "kjo";
$password = "kjo";
$dbname = "hccsdata";
$conn = mysqli_connect($hostname, $username, $password);
if(mysql_connect_errno($conn)){
    echo "db 연결 실패:" . mysql_connect_error();
  }else{
    echo "db 연결 성공"
  }
  $db_sec = mysqli_select_db($db_con, $dbname);
if ($db_sec) {
  echo "DB select OK <p>";
} else {
  echo "DB select NO <p>";
}

mysqli_query($conn,'SET NAMES utf8');
$class1 = $_POST['class1'];
$class2 = $_POST['class2'];
$class3 = $_POST['class3'];
$class4 = $_POST['class4'];
$class5 = $_POST['class5'];
$class6 = $_POST['class6'];
$score = $_POST['score'];
$totaltime = $_POST['totaltime'];
$sql = "insert into hccsdata(class1, class2, class3, class4, class5, class6, score, totaltime) values('$class1', '$class2', '$class3', '$class4', '$class5', '$class6', '$score', '$totaltime')";
$res = $conn->query($sql);
echo $res;
?>
