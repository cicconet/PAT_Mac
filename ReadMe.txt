Points and Tangents

Captures relevant points and tangents from images, via Morlet wavelet filtering.
It’s the equivalent of PAT (https://github.com/cicconet/PAT),
but uses Mac-only Frameworks
(namely, CoreFoundation, CoreGraphics, ImageIO, and Accelerate),
so it’s not cross platform.
However, if you use Mac, this is the recommended version,
since the image processing methods should be faster.


main.cpp
  Main file with examples for image IO, wavelet design,
  wavelet filtering, and capturing points and tangents.

PATImage
  Image IO.

PATWavelet
  Morlet wavelet structure.

PATConvolution
  Handles convolutions, performed by the Accelerate framework.

PATCoefficients
  Main class. Captures relevant points and their tangents.

PAT.xcodeproj
  Xcode project file.


Marcelo Cicconet
New York University
marceloc.net




