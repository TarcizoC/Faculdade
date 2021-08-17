import webbrowser
arquivo = open("Thais.txt", "w")

arquivo.write("Te amo :)\nFique com uma musiquinha maravilhosa e pra agradecer por tudo que vc faz por mim\nVeja se a camera ta certinha e baixa o pacote office ai.")
arquivo = open("Thais.txt", "r")
print(arquivo.readlines())

webbrowser.open('https://www.youtube.com/watch?v=YuoBzeZSetE', new=0, autoraise=True)

arquivo.close()
