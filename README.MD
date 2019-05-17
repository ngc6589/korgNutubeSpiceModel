korg Nutube の MODEL ファイル
====

Overview

## Description
http://ayumi.cava.jp/ Ayumi's Lab. 様にて公開されている R 言語パッケージを使用して、nutube のモデルを作成しました。
個人用として作成したモデルですので、シミュレーション結果を保証するものではありません。

## Usage
LTSpice で使用するときは、.inc ファイル内部の ^ を ** に置換してご使用ください。
また、シンボルファイルのサンプル .asy も入れておきました。
LTSpice 実行時に model ファイルが読み込めないときは、 .include korgNutube.inc のスパイスディレクティブを回路図に追記してください。

## モデル作成
RStudio から行いました。pdf のデータシートを見ながらプロットデータの入力を行います。
![RStudio Screenshot](https://user-images.githubusercontent.com/4132056/57895452-9a3ab400-7886-11e9-951b-cbccd71ef05b.jpg)

pdf の特性図からはややずれていますが、ほぼほぼ近い状態になりました。
![RStudio Screenshot2](https://user-images.githubusercontent.com/4132056/57895528-0cab9400-7887-11e9-841e-57c387fd5426.jpg)

## オリジナル（非公開）の LTSpice によるトレース
![Eg/Ip Official](https://user-images.githubusercontent.com/4132056/57895625-8ba0cc80-7887-11e9-93e6-f448bbb62816.png)

## 自作したモデルの LTSpice によるトレース
![Eg/Ip MyModel](https://user-images.githubusercontent.com/4132056/57895656-c99df080-7887-11e9-8726-95cea308fd50.png)

## オリジナル（非公開）の LTSpice によるサンプル回路のシミュレーション
アンプゲイン約6dB程度で設計した f 特です。
![D6reK0kUEAAWG0u](https://user-images.githubusercontent.com/4132056/57895712-0ff34f80-7888-11e9-9365-1ad8731a5b89.png)

## 自作したモデルの LTSpice によるサンプル回路のシミュレーション
アンプゲイン約6dB程度で設計した f 特です。オリジナルモデルより約1dBほど増幅度が大きくシミュレーションされました。f特はほぼ同等で表示されました。
![D6reMfHUwAAx-OO](https://user-images.githubusercontent.com/4132056/57895761-56e14500-7888-11e9-85d5-0a488b24ee39.png)

## Author

[Masahiro Kusunoki](https://github.com/ngc6589)
Twitter @ngc6589
