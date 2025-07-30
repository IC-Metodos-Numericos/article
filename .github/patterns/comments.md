# Comment Patterns for LaTeX Annotations

This document describes standard commands for code comments using the [`todonotes`](https://ctan.org/pkg/todonotes) package in LaTeX. Use these patterns to improve code readability and collaboration in your LaTeX projects.

## Required Package

Add the following to your preamble:
```latex
\usepackage{todonotes} % For visual margin comments
```

## Custom Commands

Add these custom commands to your preamble to standardize comment types and author tags:

```latex
% General comment types
\newcommand{\TODO}[1]{\todo[inline,color=yellow!90!white]{TODO: #1}}
\newcommand{\FIXME}[1]{\todo[inline,color=orange!30!white]{FIXME: #1}}
\newcommand{\NOTE}[1]{\todo[inline,color=green!20!white]{NOTE: #1}}
\newcommand{\HACK}[1]{\todo[inline,color=purple!20!white]{HACK: #1}}
\newcommand{\BUG}[1]{\todo[inline,color=red!30!white]{BUG: #1}}

% Author-specific comments
\newcommand{\EnzoR}[1]{\todo[inline,color=violet!20!white]{@EnzoR: #1}}
\newcommand{\LucasM}[1]{\todo[inline,color=cyan!20!white]{@LucasM: #1}}
\newcommand{\Daniel}[1]{\todo[inline,color=green!20!white]{@Daniel: #1}}
\newcommand{\LuisD}[1]{\todo[inline,color=gold!30!white]{@LuisD: #1}}
```

## Example Usage

```latex
% General comments
\TODO{Refactor this section for clarity}
\FIXME{Handle edge case when input is null}
\NOTE{This proof assumes $x > 0$}
\HACK{Temporary workaround for missing reference}
\BUG{Fails when $n < 0$}

% Author comments
\LucasM{Please review this derivation}
\EnzoR{Check the notation here}
\Daniel{Is this assumption valid?}
\LuisD{Add citation for this result}
```