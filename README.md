## Simple Anagram Checker // 簡単なアナグラムチェッカー

This is a simple C program that check if two input strings are anagrams of each other.
この C プログラムは、与えられた二つの英語単語がアナグラムかどうかをチェックするプログラムである。

### Prerequisites

Before running this program, ensure that you have a C compiler installed on your system.
このプログラムを実行する前に、システムにCコンパイラがインストールされていることを確認してください。

### Usage

1. Clone or download the repository to your local machine.
2. Open a terminal and navigate to the project directory.
3. Compile the program using the following command:

`gcc -o anagram Anagram.c`


4. Run the program by providing two strings command-line argument:

`./anagram [string1] [string2]`

Replace `[string1]` and `[string2]` with the words that you want to check.

1．リポジトリをクローンするか、ダウンロードしてローカルマシンに保存します。

2. ターミナルを開き、プロジェクトディレクトリに移動します。

3. 次のコマンドを使用してプログラムをコンパイルします。
`gcc -o anagram Anagram.c`
4. 二つの英単語をコマンドライン引数として指定してプログラムを実行します。  
`./anagram [string1] [string2]`  
[string1]と[string2] の部分をチェックしたい英単語に置き換えてください。

### Example

`./anagram cat tac`

Output:
`The two strings are anagrams.`


### Limitations

- The program only accepts lowercase english alphabets.
