var data = [3, 7, 2, 9, 1, 11, 251];
var tot = 0;
data.forEach(function(d){ 
    tot += d;
}); 
console.log('Sum = ' + tot);
// outputs 'Sum = 33'    
document.getElementById('viz').innerHTML = 'Sum = ' + tot;