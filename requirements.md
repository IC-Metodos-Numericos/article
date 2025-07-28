# ✅ Requisitos para editar e compilar LaTeX

Este projeto utiliza LaTeX no Visual Studio Code. Siga os passos abaixo para configurar seu ambiente:

---

## 🧱 1. Instale o compilador LaTeX (MiKTeX)

🔗 Baixe aqui: https://miktex.org/download

Durante a instalação:
- Marque a opção: **"Install missing packages on-the-fly"**
- Aceite instalar pacotes automaticamente

---

## 🖥️ 2. Instale o Visual Studio Code

🔗 https://code.visualstudio.com/

---

## 🔌 3. Instale as extensões no VS Code

Abra o VS Code e instale as extensões:

- 🧪 **LaTeX Workshop**  
  ID: `James-Yu.latex-workshop`

- ✂️ **LaTeX Snippets** *(opcional mas útil)*  
  ID: `HaoyunQin.latex-snippets`

- 📂 **LaTeX**
 ID: `Mathematic Inc.latex`

### Como instalar rapidamente:

1. Pressione `Ctrl + Shift + X` para abrir o menu de extensões.
2. Pesquise os nomes e clique em "Instalar".

---

## 🧪 4. Verifique se o `latexmk` está funcionando

Abra o terminal no VS Code e digite:

```bash
latexmk -v
```

## ▶️ 5. Compile o projeto

Abra o arquivo .tex principal.

1. Pressione Ctrl + Alt + B para compilar.
  O PDF aparecerá no painel lateral ou na pasta do projeto.