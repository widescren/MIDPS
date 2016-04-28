<?php
// Database configuration
$dbHost = "Smarterasp.net";
$dbUsername = "vigole95-001";
$dbPassword = "topdevice95";
$dbName = "db_9fb8ec_baze2";

// Create database connection
$db = new mysqli($dbHost, $dbUsername, $dbPassword, $dbName);

// Check connection
if ($db->connect_error) {
    die("Connection failed: " . $db->connect_error);
}
?>