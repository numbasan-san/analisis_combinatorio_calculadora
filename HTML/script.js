
function permutar(texto){
    if (texto.length <= 2){
        return texto.lenght === 2 ? [texto, texto[1] + texto[0]] : [texto]
    }
    return texto.split('').reduce((a, c, i) => a.concat(permutar(texto.slice(0, i) + texto.slice(i + 1)).map(v => c + v)), [])
}

function cleaner() {
    
}

conjunto = permutar('abcde1234')
count = 0
combos = ['ab', 'ac', 'ad', 'ae', 'bc', 'bd', 'be', 'cd', 'ce', 'de', 'ba']
    
set = []
for (let i = 0; i < conjunto.length; i++) {
    for (let j = 0; j < combos.length; j++) {
        if ( !(conjunto[i].includes(combos[j])) ){
            count ++
            set.push(conjunto[i]);
        }
    }
    
}
console.log(count)
console.log(set)
