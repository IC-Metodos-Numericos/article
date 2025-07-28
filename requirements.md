# ✅ Requisitos para editar e compilar LaTeX

Este projeto utiliza LaTeX no Visual Studio Code. Siga os passos abaixo para configurar seu ambiente:

---

## 🧱 1. Instale o compilador LaTeX (MiKTeX)

- Baixe em: [https://miktex.org/download](https://miktex.org/download)
- Durante a instalação:
  - Marque **"Install missing packages on-the-fly"**
  - Aceite instalar pacotes automaticamente

---

## 🖥️ 2. Instale o Visual Studio Code

- Baixe em: [https://code.visualstudio.com/](https://code.visualstudio.com/)

---

## 🔌 3. Instale as extensões no VS Code

No VS Code, instale as seguintes extensões:

- 🧪 **LaTeX Workshop**  
  `James-Yu.latex-workshop`
- ✂️ **LaTeX Snippets** *(opcional)*  
  `HaoyunQin.latex-snippets`
- 📂 **LaTeX**  
  `Mathematic Inc.latex`

**Como instalar rapidamente:**

1. Pressione `Ctrl + Shift + X` para abrir o menu de extensões.
2. Pesquise pelo nome e clique em "Instalar".

---

## 🧪 4. Verifique o `latexmk`

No terminal do VS Code, execute:

```bash
latexmk -v
```

---

## ▶️ 5. Compile o projeto

1. Abra o arquivo `.tex` principal.
2. Pressione `Ctrl + Alt + B` para compilar. O PDF será gerado.
3. Ou, no terminal integrado, execute:

   ```bash
   latexmk -pdf main.tex
   ```

Se necessário, instale o `latexmk` via MiKTeX:

```bash
mpm --install latexmk
```
