# clang-format によるソースコードのフォーマット

  + Ubuntu 20.04.3 LTS
  + clang-format version 10.0.0-4ubuntu1

## clang-format をインストールする

```
sudo apt install clang-format -y
```

## .clang-format を生成する

```
clang-format -style=llvm -dump-config > .clang-format
```

  > プロジェクトのルートディレクトリで上記のコマンドを実行することで,
  > プロジェクトのルートディレクトリに `.clang-format` が生成される.<br>

  > `style` オプションの値はその他に `google` (Google 準拠のスタイル) などがあるが,
  > 当プロジェクトでは `llvm` (LLVM 準拠のスタイル) を指定する.<br>

## .clang-format を編集する

  下記に修正前と修正後の比較結果を記載する.<br>

```
diff --git a/.clang-format b/.clang-format
index c224e06..33bf2a3 100644
--- a/.clang-format
+++ b/.clang-format
@@ -1,12 +1,12 @@
 ---
 Language:        Cpp
 # BasedOnStyle:  LLVM
-AccessModifierOffset: -4
-AlignAfterOpenBracket: AlwaysBreak
-AlignConsecutiveMacros: true
-AlignConsecutiveAssignments: true
-AlignConsecutiveDeclarations: true
-AlignEscapedNewlines: Left
+AccessModifierOffset: -2
+AlignAfterOpenBracket: Align
+AlignConsecutiveMacros: false
+AlignConsecutiveAssignments: false
+AlignConsecutiveDeclarations: false
+AlignEscapedNewlines: Right
 AlignOperands:   true
 AlignTrailingComments: true
 AllowAllArgumentsOnNextLine: true
@@ -14,54 +14,54 @@ AllowAllConstructorInitializersOnNextLine: true
 AllowAllParametersOfDeclarationOnNextLine: true
 AllowShortBlocksOnASingleLine: Never
 AllowShortCaseLabelsOnASingleLine: false
-AllowShortFunctionsOnASingleLine: None
-AllowShortLambdasOnASingleLine: None
+AllowShortFunctionsOnASingleLine: All
+AllowShortLambdasOnASingleLine: All
 AllowShortIfStatementsOnASingleLine: Never
 AllowShortLoopsOnASingleLine: false
 AlwaysBreakAfterDefinitionReturnType: None
 AlwaysBreakAfterReturnType: None
 AlwaysBreakBeforeMultilineStrings: false
-AlwaysBreakTemplateDeclarations: Yes
-BinPackArguments: false
-BinPackParameters: false
+AlwaysBreakTemplateDeclarations: MultiLine
+BinPackArguments: true
+BinPackParameters: true
 BraceWrapping:
   AfterCaseLabel:  false
-  AfterClass:      true
+  AfterClass:      false
   AfterControlStatement: false
-  AfterEnum:       true
-  AfterFunction:   true
-  AfterNamespace:  true
+  AfterEnum:       false
+  AfterFunction:   false
+  AfterNamespace:  false
   AfterObjCDeclaration: false
-  AfterStruct:     true
-  AfterUnion:      true
-  AfterExternBlock: true
+  AfterStruct:     false
+  AfterUnion:      false
+  AfterExternBlock: false
   BeforeCatch:     false
   BeforeElse:      false
   IndentBraces:    false
-  SplitEmptyFunction: false
-  SplitEmptyRecord: false
-  SplitEmptyNamespace: false
-BreakBeforeBinaryOperators: All
-BreakBeforeBraces: Custom
+  SplitEmptyFunction: true
+  SplitEmptyRecord: true
+  SplitEmptyNamespace: true
+BreakBeforeBinaryOperators: None
+BreakBeforeBraces: Attach
 BreakBeforeInheritanceComma: false
-BreakInheritanceList: AfterColon
+BreakInheritanceList: BeforeColon
 BreakBeforeTernaryOperators: true
 BreakConstructorInitializersBeforeComma: false
-BreakConstructorInitializers: BeforeComma
+BreakConstructorInitializers: BeforeColon
 BreakAfterJavaFieldAnnotations: false
 BreakStringLiterals: true
 ColumnLimit:     80
 CommentPragmas:  '^ IWYU pragma:'
 CompactNamespaces: false
-ConstructorInitializerAllOnOneLineOrOnePerLine: true
+ConstructorInitializerAllOnOneLineOrOnePerLine: false
 ConstructorInitializerIndentWidth: 4
 ContinuationIndentWidth: 4
-Cpp11BracedListStyle: false
+Cpp11BracedListStyle: true
 DeriveLineEnding: true
 DerivePointerAlignment: false
 DisableFormat:   false
 ExperimentalAutoDetectBinPacking: false
-FixNamespaceComments: false
+FixNamespaceComments: true
 ForEachMacros:
   - foreach
   - Q_FOREACH
@@ -81,8 +81,8 @@ IncludeIsMainRegex: '(Test)?$'
 IncludeIsMainSourceRegex: ''
 IndentCaseLabels: false
 IndentGotoLabels: true
-IndentPPDirectives: BeforeHash
-IndentWidth:     4
+IndentPPDirectives: None
+IndentWidth:     2
 IndentWrappedFunctionNames: false
 JavaScriptQuotes: Leave
 JavaScriptWrapImports: true
@@ -90,7 +90,7 @@ KeepEmptyLinesAtTheStartOfBlocks: true
 MacroBlockBegin: ''
 MacroBlockEnd:   ''
 MaxEmptyLinesToKeep: 1
-NamespaceIndentation: All
+NamespaceIndentation: None
 ObjCBinPackProtocolList: Auto
 ObjCBlockIndentWidth: 2
 ObjCSpaceAfterProperty: false
@@ -103,15 +103,15 @@ PenaltyBreakString: 1000
 PenaltyBreakTemplateDeclaration: 10
 PenaltyExcessCharacter: 1000000
 PenaltyReturnTypeOnItsOwnLine: 60
-PointerAlignment: Middle
-ReflowComments:  false
+PointerAlignment: Right
+ReflowComments:  true
 SortIncludes:    true
 SortUsingDeclarations: true
-SpaceAfterCStyleCast: true
-SpaceAfterLogicalNot: true
-SpaceAfterTemplateKeyword: false
+SpaceAfterCStyleCast: false
+SpaceAfterLogicalNot: false
+SpaceAfterTemplateKeyword: true
 SpaceBeforeAssignmentOperators: true
-SpaceBeforeCpp11BracedList: true
+SpaceBeforeCpp11BracedList: false
 SpaceBeforeCtorInitializerColon: true
 SpaceBeforeInheritanceColon: true
 SpaceBeforeParens: ControlStatements
@@ -126,11 +126,12 @@ SpacesInCStyleCastParentheses: false
 SpacesInParentheses: false
 SpacesInSquareBrackets: false
 SpaceBeforeSquareBrackets: false
-Standard:        c++17
+Standard:        Latest
 StatementMacros:
   - Q_UNUSED
   - QT_REQUIRE_VERSION
-TabWidth:        4
+TabWidth:        8
 UseCRLF:         false
 UseTab:          Never
 ...
+
```

## ソースコードをフォーマットする

```
find -type f -name "*.c++" -o -name "*.h++" | xargs clang-format -i
```

  > プロジェクトのルートディレクトリで上記のコマンドを実行することで,
  > プロジェクト内の全ての
  > C++ ソースファイル及びヘッダファイルがフォーマットされる.<br>
