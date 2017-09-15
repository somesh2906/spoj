<html>
<head>


    <link rel="stylesheet" type="text/css" href="/css/bootstrap.min.css" />
    <link rel="stylesheet" type="text/css" href="/css/bootstrap-responsive.min.css" />
    <link rel="stylesheet" type="text/css" href="/css/daterangepicker-bs2.css" />
    <link rel="stylesheet" type="text/css" href="/css/jquery.dataTables.css">
    <link rel="stylesheet" type="text/css" href="/css/buttons.dataTables.min.css">
    <link rel="stylesheet" type="text/css" href="/css/modal.css">
    <link rel="stylesheet" type="text/css" href="/css/tab.css">
    <link rel="stylesheet" type="text/css" href="/css/index.css">
    <script type="text/javascript" src="/js/jquery.js"></script>
    <script type="text/javascript" charset="utf8" src="/js/jquery.min.js"></script>
    <script type="text/javascript" charset="utf8" src="/js/jquery.dataTables.min.js"></script>
    <script type="text/javascript" src="/js/bootstrap.min.js"></script>
    <script type="text/javascript" src="/js/bootstrap-tabs.js"></script>
    <script type="text/javascript" src="/js/moment.js"></script>
    <script type="text/javascript" src="/js/daterangepicker.js"></script>
    <script type="text/javascript" src="/js/dataTables.buttons.min.js"></script>
    <script type="text/javascript" src="/js/buttons.flash.min.js"></script>
    <script type="text/javascript" src="/js/buttons.html5.min.js"></script>


    <style>
        .indent-submit
        {
            margin-left:15px;
        }
        .all-form
        {
            background-color:E2E4FF;
            padding: 10px 1px 1px 1px;
        }
        .indent
        {
            margin-left:0.5px;
            margin-right:0.5px;

        }
        .input-row {
            padding: 5px;
        }
        .fleft {
            float: left;
            width: 34%;
        }
        .fright {
            float: right;
            width: 34%;
        }
    </style>
</head>
<body>

<div class="container">
    <h2>Shield Oncall</h2>
    <ul class="nav nav-tabs" data-tabs="tabs">
        <li onclick="reset"><a href="#payment"  id="PZT">HBase</a></li>
        <li class="resetClass"><a href="#order" id="orderget">OMS 3.0</a></li>
        <li><a href="#aerospikeoms" id="aerospikegetoms">Aerospike</a></li>
        <li><a href="#mongoD" id="mongo">Mongo</a></li>
        <li><a href="#viewRules" id="rules">View-Rules</a></li>
        <li><a href="#reloadRules" id="reload">Reload-Rules</a></li>
        <li><a href="#rawMeta" id="rawMetaTable">Raw Meta</a></li>
        <li><a href="#generateHandsetData" id="HandsetData">Handset Data</a></li>
        <li><a href="#generateOtherCategoryData" id="OtherCategoryData">Other Category FRM Data</a></li>
        <li><a href="#generateSuspectDomain" id="suspectDomain">Suspect Domain Data</a></li>
        <li><a href="#generateToaDomain" id="toaDomain">Toa Domain Data</a></li>
        <li><a href="#generateAppleWatch" id="appleWatch">Apple Watch Data</a></li>
        <li><a href="#generateFileLinks" id="fileLinks">Download FRM Files</a></li>
        <li><a href="#tabs" id="FRMtabs">FRM</a></li>
    </ul>

    <div class="tab-content" >

    	<div id="tabs" class="tab-pane fade">
            <br>
            <div class="tab">
  			<button id="tabs1" onclick="showStuff(this)">Handset Data</button>
 			<button id="tabs2" onclick="showStuff(this)">OtherCategory Data</button>
  			<button id="tabs3" onclick="showStuff(this)">Suspect Domain Data</button>
  			<button id="tabs4" onclick="showStuff(this)">Toa Domain Data</button>
  			<button id="tabs5" onclick="showStuff(this)">Apple Watch Data</button>
  			<button id="tabs6" onclick="showStuff(this)">Download FRM Files</button>
		</div>
        </div>

  
<div id="tabs-2" class="tabContent">
    <p>M massa ut d</p>
</div>
<div id="tabs-3" class="tabContent">
    <p> sodales.</p>
</div>


        <div id="tabs-1" class="tabContent">
            <br>
            <div class="handsetData-frm-form all-form">
                <form>
                    <div class="row indent">
                        <div class="form-group col-lg-4">
                            <label for="fsn">FSN:</label>
                            <input type="text" class="form-control" id="FSN">
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="pincodeGroup">Pincode Group:</label>
                            <input type="text" class="form-control" id="pincodeGroup">
                        </div>
                    </div>
                    <div style="width:100%; display:table;">
                        <div class="fleft" style="padding: 14px">
                            <button type="submit" class="btn handsetData-submit btn-default">Submit</button>
                        </div>
                    </div>
                </form>
                <pre class="generateHandsetJson" style="display:none">
                    </pre>
            </div>
        </div>


        <div id="payment" class="tab-pane fade in active">
            <br>
            <div class="payment-form all-form">
                <form>
                    <div class="row indent">
                        <div class="form-group col-lg-4">
                            <label for="CLIENT_ID">Client:</label>
                            <input type="text" class="form-control" id="CLIENT_ID">
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="QUERY_COLUMNS">Insert Columns:</label>
                            <input type="text" class="form-control" id="QUERY_COLUMNS" >
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="QUERY_WHERE">Where Clause:</label>
                            <input type="text" class="form-control" id="QUERY_WHERE" >
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="QUERY_TABLE">Table:</label>
                            <input type="text" class="form-control" id="QUERY_TABLE" >
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="QUERY_GROUP_BY">Group By Clause:</label>
                            <input type="text" class="form-control" id="QUERY_GROUP_BY" >
                        </div>
                    </div>
                    <div style="width:100%; display:table; clear:both;">
                        <div class="row indent-submit fleft">
                            <button type="submit" class="btn btn-default">Submit</button>
                        </div>
                        <div class="input-row fleft" id="dateRange">
                            <label style="margin-right: 5px;"><p>Day Range: </p></label> <input type="text"
                                                                                                class="daterange" id="DATE_RANGE" name="paymentDR" autocomplete="on" style="width:50%;">
                        </div>
                        <div>
                            <button type="button" class="btn btn-success" id="QUERY_HELPER" style="margin-left:200px">Query Helper</button>
                        </div>

                    </div>
                </form>
            </div>
            <br>
            <div id="pzt-loader" style="display: none">
                <center> <img src="/img/loading.gif" /> </center>
            </div>
            <table id="pzt-table">
                <thead>

                </thead>
                <tbody>

                </tbody>
            </table>

        </div>

        <div id="order" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">
                        <input type="text" class="form-control orderid" placeholder="Enter Order ID">

                        <span class="input-group-btn">
                             <button class="btn btn-default getorder" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="orderjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="aerospikeoms" class="tab-pane fade">
            <br>
            <div class="aerospike-oms-form all-form">
                <form>
                    <div class="row indent">
                        <div class="form-group col-lg-4">
                            <label for="durationList">Durations (Separated with comma ,):</label>
                            <input type="text" class="form-control" id="DURATION">
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="accountId">Account Id:</label>
                            <input type="text" class="form-control" id="AC_ID">
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="terminalId">Terminal Id:</label>
                            <input type="text" class="form-control" id="TE_ID">
                        </div>
                        <div class="form-group col-lg-4">
                            <label for="phoneNumber">Phone Number:</label>
                            <input type="text" class="form-control" id="PH_NU">
                        </div>
                    </div>
                    <div style="width:100%; display:table;">
                        <div class="fleft" style="padding: 14px">
                            <button type="submit" class="btn aerospike-submit btn-default">Submit</button>
                        </div>
                    </div>
                </form>
                <pre class="aerospikejson" style="display:none">
                    </pre>
            </div>
        </div>


        <div id="generateFileLinks" class="tab-pane fade">
            <br>
            <div class="fileLinks-frm-form all-form">
                <form>
                    <div class="row indent">
                        <div class="form-group col-lg-4">
                            <label for="type">Category:</label>
                            <input type="text" class="form-control" id="type">
                        </div>
                    </div>
                    <div style="width:100%; display:table;">
                        <div class="fleft" style="padding: 14px">
                            <button type="submit" class="btn generateLink-submit btn-default">Get File!</button>
                        </div>
                    </div>
                </form>
                <pre class="generateLinkJson" style="display:none">
                    </pre>
            </div>
        </div>

        

        <div id="generateOtherCategoryData" class="tab-pane fade">
            <br>
            <div class="otherCategoryData-frm-form all-form">
                <form>
                    <div class="row indent">
                        <div class="form-group col-lg-4">
                            <label for="category">Category:</label>
                            <input type="text" class="form-control" id="category">
                        </div>
                    </div>
                    <div style="width:100%; display:table;">
                        <div class="fleft" style="padding: 14px">
                            <button type="submit" class="btn otherCategory-submit btn-default">Submit</button>
                        </div>
                    </div>
                </form>
                <pre class="generateOtherCategoryJson" style="display:none">
                    </pre>
            </div>
        </div>


        <div id="mongoD" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">
                        <input type="text" class="form-control orderid-mongo" placeholder="Enter Order ID">

                        <span class="input-group-btn">
                             <button class="btn btn-default getorder-mongo" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="mongoDjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="viewRules" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">

                        <span class="input-group-btn">
                             <button class="btn btn-default getrules" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="rulesjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="reloadRules" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">

                        <span class="input-group-btn">
                             <button class="btn btn-default reloadRules" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="reloadjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="downloadDataDummy" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">

                        <span class="input-group-btn">
                             <a class="btn btn-default" type="button" href="/Users/somesh.maurya/Desktop/fromJSON.csv">Download!</a>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="reloadjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="generateSuspectDomain" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">

                        <span class="input-group-btn">
                             <button class="btn btn-default suspectDomain" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="suspectDomainjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="generateToaDomain" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">

                        <span class="input-group-btn">
                             <button class="btn btn-default toaDomain" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="toaDomainjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>

        <div id="generateAppleWatch" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">

                        <span class="input-group-btn">
                             <button class="btn btn-default appleWatch" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="appleWatchjson" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>




        <div id="rawMeta" class="tab-pane fade">
            <br>
            <div class="row">
                <div class="col-lg-12">
                    <div class="input-group">
                        <input type="text" class="form-control clientReferenceId" placeholder="Enter Client Reference ID(Ex: OMS:1234455666)">

                        <span class="input-group-btn">
                             <button class="btn btn-default getShieldReferenceId" type="button">Go!</button>
                        </span>
                    </div><!-- /input-group -->
                    <pre class="shieldReferenceId" style="display:none">
                    </pre>
                </div><!-- /.col-lg-6 -->
            </div>
        </div>


        <div id="listingIds" class="tab-pane fade">
            <br>
            <form>
                <div class="row">
                    <div class="col-lg-12">
                        <div class="input-group">
                            <div class="input-row fleft" id="dateRange2">
                                <label style="margin-right: 5px;"><p>Day Range: </p></label>
                                <input type="text" class="daterange2" id="DATE_RANGE2" name="zuluDR" autocomplete="on" style="width:50%;">
                            </div>
                            <span class="input-group-btn">
                             <button type="submit" class="btn btn-default getListingIds">Go!!!!!</button>
                        </span>
                        </div>
                        <pre class="listingId" style="display:none">
                    </pre>
                    </div>
                </div>
            </form>
        </div>


    </div>
</div>
<img id="myImg" src="/img/de.png" alt="Query Helper" style="display:none">
<div id="myModal" class="modal">
    <span class="close">&times;</span>
    <img class="modal-content" id="img01">
    <div id="caption"></div>
</div>

<script>
    $("#pzt-loader").hide();
    $('#dateRange .daterange').daterangepicker({
        format : 'YYYY/MM/DD'
    });
    $('#dateRange2 .daterange2').daterangepicker({
        format : 'YYYY/MM/DD'
    });
   /*  $.ajax({
        url : 'http://10.34.101.122:9090/api/console/get',
        type : 'POST',
        dataType : 'json',
        data : {
            client : "PZT"
        },
        success : function(data) {
            $("#pzt-loader").hide();
            assignToEventsColumns(data,"#pzt-table","PZT",null);
        }
    }); */

    function assignToEventsColumns(data, id, columns) {
        var coldata = ""
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/getcol',
            type : 'POST',
            dataType : 'json',
            data : {
                columns : columns
            },
            success : function(_data) {
                coldata=_data;
                console.log(coldata);
                if ( $.fn.dataTable.isDataTable( id ) ) {
                    $(id).DataTable().destroy();
                    $(id).find('th').remove();
                    $(id).find('td').remove();
                    table =$(id).dataTable({
                        dom: 'T<"clear">lfrtip',
                        "aaData" : data,
                        "autoWidth": true,
                        "columns" : coldata,
                        dom: 'Bfrtip',
                        buttons: [
                                  'csv','pdf'
                              ]

                   });
                    //table = $(id).DataTable();
                    //table.clear().draw();
                  //  table.rows.add(data);
                   // table.draw();

                }
                else {
                    table =$(id).dataTable({
                        dom: 'T<"clear">lfrtip',
                        "aaData" : data,
                        "autoWidth": true,
                        "columns" : coldata,
                        autoWidth: true,
                        order: [],
                        dom: 'Bfrtip',
                        buttons: [
                                  'csv','pdf'
                              ]

                    })
                }
            }
        });



    }

    $(document).ready(function(){
        $(".nav-tabs a").click(function(){
            $(this).tab('show');
        });
    });

    $('.getorder').click(function (e) {
        e.preventDefault();
        $('.orderjson').html("");
        $('.orderjson').hide();
        var orderid = $('.orderid').val();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/getOrder',
            type : 'POST',
            dataType : 'json',
            data : {
                orderId : orderid
            },
            success : function(data) {

                $('.orderjson').append(JSON.stringify(data,null,2));
                $('.orderjson').show();
            }
        });
    });

    $('.getorder-mongo').click(function (e) {
        e.preventDefault();
        $('.mongoDjson').html("");
        $('.mongoDjson').hide();
        var orderid = $('.orderid-mongo').val();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/getMongoData',
            type : 'POST',
            dataType : 'json',
            data : {
                orderId : orderid
            },
            success : function(data) {
                var parsedjson = JSON.parse(JSON.stringify(data));
                for(var i=0;i<parsedjson.length;i++){
                    $('.mongoDjson').append(syntaxHighlight(parsedjson[i])+"<br/><br/>");
                }
                $('.mongoDjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                alert('request failed');
            }
        });
    });


    $('.otherCategory-submit').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.generateOtherCategoryJson').html("");
        $('.generateOtherCategoryJson').hide();
        var $inputs = $(this).parents('form:first').find(':input');
        var values = {};
        $inputs.each(function() {
            values[this.id] = this.value;
        });
        var category = values['category'];
        console.log("In click category" + category)
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/frmOtherCategories',
            type : 'POST',
            dataType: 'json',
            data : {
                category : category
            },
            success : function(data) {
            console.log("In success " + data);
                $('.generateOtherCategoryJson').append("File being generated"+"<br/><br/>");
                $('.generateOtherCategoryJson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });


    $('.generateLink-submit').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.generateLinkJson').html("");
        $('.generateLinkJson').hide();
        var $inputs = $(this).parents('form:first').find(':input');
        var values = {};
        $inputs.each(function() {
            values[this.id] = this.value;
        });
        var type = values['type'];
        console.log("In click type" + type)
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/getDownloadLink',
            type : 'POST',
            dataType: 'text',
            data : {
                type : type
            },
            success : function(data) {
            console.log("In success " + data);

                window.location.href = data;
                $('.generateLinkJson').append(data+"<br/><br/>");
                $('.generateLinkJson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    $('.handsetData-submit').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.generateHandsetJson').html("");
        $('.generateHandsetJson').hide();
        var $inputs = $(this).parents('form:first').find(':input');
        var values = {};
        $inputs.each(function() {
            values[this.id] = this.value;
        });
        var fsn = values['FSN'];
        var pincodeGroup = values['pincodeGroup'];
        console.log("In click fsn" + fsn)
        console.log("In click pinCodeGroup" + pincodeGroup)
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/frmDataHanset',
            type : 'POST',
            dataType: 'json',
            data : {
                fsn : fsn,
                pincodeGroup : pincodeGroup
            },
            success : function(data) {
            console.log("In success " + data);
                $('.generateHandsetJson').append("File being generated"+"<br/><br/>");
                $('.generateHandsetJson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    $('.getrules').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.rulesjson').html("");
        $('.rulesjson').hide();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/viewRules',
            type : 'GET',
            dataType: 'text',

            success : function(data) {

            var jsonobject = JSON.parse(data);
            var parsedjson = JSON.stringify(jsonobject, null, 4);
            $('.rulesjson').append(library.json.prettyPrint(jsonobject) +"<br/><br/>");
            $('.rulesjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

     if (!library)
   var library = {};

library.json = {
   replacer: function(match, pIndent, pKey, pVal, pEnd) {
      var key = '<span class=json-key>';
      var val = '<span class=json-value>';
      var str = '<span class=json-string>';
      var r = pIndent || '';
      if (pKey)
         r = r + key + pKey.replace(/[": ]/g, '') + '</span>: ';
      if (pVal)
         r = r + (pVal[0] == '"' ? str : val) + pVal + '</span>';
      return r + (pEnd || '');
      },
   prettyPrint: function(obj) {
      var jsonLine = /^( *)("[\w]+": )?("[^"]*"|[\w.+-]*)?([,[{])?$/mg;
      return JSON.stringify(obj, null, 3)
         .replace(/&/g, '&amp;').replace(/\\"/g, '&quot;')
         .replace(/</g, '&lt;').replace(/>/g, '&gt;')
         .replace(jsonLine, library.json.replacer);
      }
   };


    $('.getShieldReferenceId').click(function (e) {
        e.preventDefault();
        $('.shieldReferenceId').html("");
        $('.shieldReferenceId').hide();
        var clientReferenceId = $('.clientReferenceId').val();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/getShieldReferenceId',
            type : 'POST',
            dataType : 'text',
            data : {
                clientReferenceId : clientReferenceId
            },
            success : function(data) {
                var shieldReferenceId = data;
                //$('.shieldReferenceId').append(shieldReferenceId);
                $('.shieldReferenceId').append(data);
                $('.shieldReferenceId').show();
            },
            error: function(xhr, textStatus, errorThrown){
                alert(errorThrown);
                alert('request failed');
            }
        });
    });



    $('.reloadRules').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.reloadjson').html("");
        $('.reloadjson').hide();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/reloadRules',
            type : 'PUT',
            dataType: 'text',
            success : function(data) {
            console.log("In success " + data);
                $('.reloadjson').append("Reload Rules done"+"<br/><br/>");
                $('.reloadjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    $('.downloadData').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.reloadjson').html("");
        $('.reloadjson').hide();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/download',
            type : 'GET',
            dataType: 'text',
            success : function(data) {
            console.log("In success " + data);
                var url='file:///Users/somesh.maurya/Desktop/get_data.sh';
                window.open(url, 'Download');
                //window.location='/Users/somesh.maurya/Desktop/get_data.sh';
                $('.reloadjson').append("File Downloaded done"+"<br/><br/>");
                $('.reloadjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    $('.suspectDomain').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.suspectDomainjson').html("");
        $('.suspectDomainjson').hide();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/frmSuspectDomain',
            type : 'GET',
            dataType: 'text',
            success : function(data) {
            console.log("In success " + data);
                $('.suspectDomainjson').append("Suspect Domain Data Generated"+"<br/><br/>");
                $('.suspectDomainjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    $('.toaDomain').click(function (e) {
        e.preventDefault();
        console.log("In click")
        $('.toaDomainjson').html("");
        $('.toaDomainjson').hide();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/frmToaDomain',
            type : 'GET',
            dataType: 'text',
            success : function(data) {
            console.log("In success " + data);
                $('.toaDomainjson').append("Toa Domain data generated"+"<br/><br/>");
                $('.toaDomainjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    $('.appleWatch').click(function (e) {

        e.preventDefault();
        console.log("In click")
        $('.appleWatchjson').html("");
        $('.appleWatchjson').hide();
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/frmAppleWatch',
            type : 'GET',
            dataType: 'text',
            success : function(data) {
            console.log("In success " + data);
                $('.appleWatchjson').append("Apple Watch data generated"+"<br/><br/>");
                $('.appleWatchjson').show();
            },
            error: function(xhr, textStatus, errorThrown){
                console.log('request failed');
            }
        });
    });

    function showStuff(element)  {
    var tabContents = document.getElementsByClassName('tabContent');
    for (var i = 0; i < tabContents.length; i++) { 
        tabContents[i].style.display = 'none';
    }

    // change tabsX into tabs-X in order to find the correct tab content
    var tabContentIdToShow = element.id.replace(/(\d)/g, '-$1');
    document.getElementById(tabContentIdToShow).style.display = 'block';

	}




    $('.getListingIds').click(function (e) {
        e.preventDefault();
        var date = $('#dateRange2').find('input').val();
        date = date.replace(/[-]/g,'--');
        date = date.replace(/[/]/g,'-');
        window.location = "http://10.34.101.122:9090/api/console/downloadFsn/"+date;
    });


    $('.aerospike-submit').click(function (e) {
        e.preventDefault();
        $('.aerospikejson').html("");
        $('.aerospikejson').hide();
        var $inputs = $(this).parents('form:first').find(':input');
        var values = {};
        $inputs.each(function() {
            values[this.id] = this.value;
        });
        var duration = values['DURATION'];
        var accountId = values['AC_ID'];
        var terminalId = values['TE_ID'];
        var phoneNumber = values['PH_NU'];
        var client="OMS";
        var pivot = "";
        if(accountId.length>0){
            pivot = pivot+client+":"+accountId;
        }
        if(terminalId.length>0){
            if(pivot.length>0) {
                pivot = pivot + "," + client + ":" + terminalId;
            }
            else
            {
                pivot = client + ":" + terminalId;
            }
        }
        if(phoneNumber.length>0){
            if(pivot.length>0) {
                pivot = pivot+","+client+":"+phoneNumber;
            }
            else
            {
                pivot = client + ":" + phoneNumber;
            }

        }
        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/getAerospikeData',
            type : 'POST',
            dataType : 'json',
            data : {
                duration : duration,
                pivot: pivot
            },
            success : function(data) {

                $('.aerospikejson').append(JSON.stringify(data,null,2));
                $('.aerospikejson').show();
            }
        });
    });

    $('.indent-submit').click(function (e){
        e.preventDefault();
        showLoader();
        hideTable();
        var $inputs = $(this).parents('form:first').find(':input');
        var values = {};
        var columns = "";
        $inputs.each(function() {
            if (this.value.length > 0){
                values[this.id] = this.value;
                if (this.id == 'QUERY_COLUMNS')
                    columns = this.value;
            }
            if (this.id == 'CLIENT_ID')
                _client = this.value


        });



        $.ajax({
            url : 'http://10.34.101.122:9090/api/console/get',
            type : 'POST',
            dataType : 'json',
            data : {
                client : _client,
                filter : JSON.stringify(values)
            },
            success : function(data) {
                hideLoader();
                showTable();
                assignToEventsColumns(data,"#pzt-table",columns);
            }
        });

    });

    function showLoader()
    {
        $("#pzt-loader").show();
    }

    function hideLoader()
    {
        $("#pzt-loader").hide();
    }

    function hideTable()
    {
        $("#pzt-table").hide();
    }

    function showTable()
    {
        $("#pzt-table").show();
    }

    function syntaxHighlight(json) {
    if (typeof json != 'string') {
         json = JSON.stringify(json, undefined, 2);
    }
    json = json.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;');
    return json.replace(/("(\\u[a-zA-Z0-9]{4}|\\[^u]|[^\\"])*"(\s*:)?|\b(true|false|null)\b|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?)/g, function (match) {
        var cls = 'number';
        if (/^"/.test(match)) {
            if (/:$/.test(match)) {
                cls = 'key';
            } else {
                cls = 'string';
            }
        } else if (/true|false/.test(match)) {
            cls = 'boolean';
        } else if (/null/.test(match)) {
            cls = 'null';
        }
    if (cls == 'key')
        match = '<font color="red"><b>' + match + '</b></font>';
        return '<span class="' + cls + '">' + match + '</span>';
    });
}

</script>
<script>
// Get the modal
var modal = document.getElementById('myModal');
function reset() {
	console.log('asdfsf');
    var tabContents = document.getElementsByClassName('tabContent');
	for (var i = 0; i < tabContents.length; i++) { 
        tabContents[i].style.display = 'none';
    }
}
// Get the image and insert it inside the modal - use its "alt" text as a caption
var img = document.getElementById('myImg');
var modalImg = document.getElementById("img01");
var captionText = document.getElementById("caption");
var queryHelper = document.getElementById("QUERY_HELPER");
queryHelper.onclick = function(){
    modal.style.display = "block";
    modalImg.src = img.src;
    captionText.innerHTML = img.alt;
}

// Get the <span> element that closes the modal
var span = document.getElementsByClassName("close")[0];

// When the user clicks on <span> (x), close the modal
span.onclick = function() { 
    modal.style.display = "none";
}
</script>

</body>
</html>
