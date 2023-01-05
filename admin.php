
<?php include 'include/header.php'; ?>
<?php
session_start();
 if(!isset($_SESSION['login'])){
   header("Location:login.php?errmsg=login first");
 }
?>

<style>

  .image-upload>input{
   display: none;
  }
</style>

<div class="container mt-3">
    <div class="row">
        <div class="col">
        <div class="image-upload">
  <label for="file-input">
    <img src="img/demoo.png" style="width:200px;height:200px;border-radius:50%"/>
  </label>

  <input id="file-input" type="file"/>
</div>
        </div>
        <div class="col">
        <div class="card" style="width: 27rem;">
  <div class="card-body">
    <h5 class="card-title">About</h5>
    <hr/>
    <h6 class="card-subtitle mb-2 text-muted">Enter about you</h6>
    <textarea name="" id="" cols="50" rows="5"></textarea>
    <button class="btn btn-success">Add</button>
  </div>
</div>
</div>
        </div>
   

<div class="row mt-5">
    <div class="col">
    <div class="card" style="width: 27rem;">
  <div class="card-body">
    <h5 class="card-title">Skills</h5>
    <hr/>
    <h6 class="card-subtitle mb-2 text-muted">What skills do you acquire</h6>
    <textarea name="" id="" cols="50" rows="5"></textarea>
    <button class="btn btn-success">Add</button>
  </div>
</div>
    </div>
    <div class="col">
    <div class="card" style="width: 27rem;">
  <div class="card-body">
    <h5 class="card-title">Experience</h5>
    <hr/>
    <h6 class="card-subtitle mb-2 text-muted">Your Experience</h6>
    <textarea name="" id="" cols="50" rows="5"></textarea>
    <button class="btn btn-success">Add</button>
  </div>
</div>
        </div>
</div>
<div class="row mt-5">
    <div class="col">
    <div class="card" style="width: 27rem;">
  <div class="card-body">
    <h5 class="card-title">Education</h5>
    <hr/>
    <h6 class="card-subtitle mb-2 text-muted">Education status</h6>
    <textarea name="" id="" cols="50" rows="5"></textarea>
    <button class="btn btn-success">Add</button>
  </div>
</div>
    </div>
    <div class="col">
    <div class="card" style="width: 27rem;">
  <div class="card-body">
    <h5 class="card-title">Project</h5>
    <hr/>
    <h6 class="card-subtitle mb-2 text-muted">Enter your recent projects</h6>
    <textarea name="" id="" cols="50" rows="5"></textarea>
    <button class="btn btn-success">Add</button>
  </div>
</div>
        </div>
</div>
</div>

<?php include 'include/footer.php'; ?>
