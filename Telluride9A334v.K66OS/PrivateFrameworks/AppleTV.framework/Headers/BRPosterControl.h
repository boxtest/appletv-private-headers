/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRContainerViewCell.h"
#import "BRPosterImageDataSource.h"
#import "BRMediaShelfViewCell.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRAutoScrollingTextControl, BRWaitSpinnerControl, NSString, BRHorizontalSegmentedWidget, BRTextControl, BRImage, BRImageControl, BRAsyncTask, BRPosterReflectionControl;
@protocol BRImageProxy;

@interface BRPosterControl : BRControl <BRMediaShelfViewCell, BRContainerViewCell, BRPosterImageDataSource> {
@private
	int _style;	// 48 = 0x30
	BRImageControl *_defaultImageControl;	// 52 = 0x34
	BRImage *_defaultImage;	// 56 = 0x38
	BRControl *_imageControl;	// 60 = 0x3c
	BRImage *_image;	// 64 = 0x40
	id<BRImageProxy> _imageProxy;	// 68 = 0x44
	int _imageSize;	// 72 = 0x48
	BRHorizontalSegmentedWidget *_numberBadge;	// 76 = 0x4c
	int _numberBadgeValue;	// 80 = 0x50
	CGColorRef _posterBorderColor;	// 84 = 0x54
	float _posterBorderWidth;	// 88 = 0x58
	BOOL _imageRequested;	// 92 = 0x5c
	NSString *_artworkIdentifier;	// 96 = 0x60
	BRAsyncTask *_imageTask;	// 100 = 0x64
	BRPosterReflectionControl *_reflectionControl;	// 104 = 0x68
	float _reflectionAmount;	// 108 = 0x6c
	float _reflectionBaseline;	// 112 = 0x70
	BRTextControl *_ordinalTextControl;	// 116 = 0x74
	BRAutoScrollingTextControl *_autoScrollingTitleControl;	// 120 = 0x78
	BRTextControl *_subtitleTextControl;	// 124 = 0x7c
	float _titleWidthScale;	// 128 = 0x80
	float _titleVerticalOffset;	// 132 = 0x84
	BOOL _alwaysShowTitles;	// 136 = 0x88
	BOOL _onlyShowSubtitlesWhenFocused;	// 137 = 0x89
	BRWaitSpinnerControl *_spinnerControl;	// 140 = 0x8c
	float _cornerRadius;	// 144 = 0x90
	float _cropAspectRatio;	// 148 = 0x94
	BOOL _cropAndFill;	// 152 = 0x98
	BOOL _deletterboxImage;	// 153 = 0x99
	BRImageControl *_badgeImageControl;	// 156 = 0x9c
	BRImage *_badgeImage;	// 160 = 0xa0
	float _badgeScale;	// 164 = 0xa4
	float _badgeOpacity;	// 168 = 0xa8
	float _badgeFocusedOpacity;	// 172 = 0xac
	int _badgePosition;	// 176 = 0xb0
	BOOL _badgeUpdated;	// 180 = 0xb4
	BRImage *_borderImage;	// 184 = 0xb8
	CGRect _borderImageFocusRect;	// 188 = 0xbc
	CGRect _borderImagePhotoImageRect;	// 204 = 0xcc
	NSString *_accessibilityLabel;	// 220 = 0xdc
	BOOL _decoratedImageCacheEnabled;	// 224 = 0xe0
	BOOL _usingDecoratedImage;	// 225 = 0xe1
	BOOL _imageEdgeAntialiasingEnabled;	// 226 = 0xe2
	id _loadCompletionBlock;	// 228 = 0xe4
	BOOL _readyToDisplay;	// 232 = 0xe8
	BOOL _ignoreLoadAndDisplayOnDemand;	// 233 = 0xe9
	BOOL _disableAnimations;	// 234 = 0xea
}
@property(retain) NSString *accessibilityLabel;	// G=0x332651b9; S=0x33265289; converted property
@property(assign) BOOL alwaysShowTitles;	// G=0x33263ad5; S=0x33263a75; converted property
@property(readonly, retain) BRImage *badgeImage;	// G=0x332633a9; converted property
@property(assign) float badgeOpacity;	// G=0x33263485; S=0x33263415; converted property
@property(readonly, assign) int badgePosition;	// G=0x332633b9; converted property
@property(assign) float badgeScale;	// G=0x33263405; S=0x332633c9; converted property
@property(assign) float cornerRadius;	// G=0x3326320d; S=0x332631ed; converted property
@property(assign) BOOL cropAndFill;	// G=0x33263261; S=0x3326321d; converted property
@property(assign) float cropAspectRatio;	// G=0x332632c5; S=0x33263271; converted property
@property(retain) BRImage *defaultImage;	// G=0x332627ed; S=0x33262791; converted property
@property(assign) BOOL deletterboxImage;	// G=0x33263d19; S=0x33263d09; converted property
@property(assign) float focusedBadgeOpacity;	// G=0x33263505; S=0x33263495; converted property
@property(readonly, retain) BRImage *image;	// G=0x33263cf9; converted property
@property(retain) id imageProxy;	// G=0x33262d5d; S=0x33262ca9; converted property
@property(assign) int numberBadgeValue;	// G=0x33263805; S=0x33263515; converted property
@property(assign) BOOL onlyShowSubtitlesWhenFocused;	// G=0x33263af5; S=0x33263ae5; converted property
@property(assign) int ordinal;	// G=0x3326306d; S=0x33262eed; converted property
@property(assign) CGColorRef posterBorderColor;	// G=0x33262841; S=0x332627fd; converted property
@property(assign) float posterBorderWidth;	// G=0x3326288d; S=0x33262851; converted property
@property(assign) int posterStyle;	// G=0x33262c99; S=0x3326289d; converted property
@property(assign) float reflectionAmount;	// G=0x33262e91; S=0x33262e3d; converted property
@property(assign) float reflectionBaseline;	// G=0x33262edd; S=0x33262ea1; converted property
@property(assign) BOOL spinnerEnabled;	// G=0x332631d5; S=0x332630b5; converted property
@property(retain) id subtitle;	// G=0x33263cd9; S=0x33263b05; converted property
@property(retain) id title;	// G=0x33263981; S=0x33263815; converted property
@property(assign) float titleVerticalOffset;	// G=0x33263a65; S=0x33263a29; converted property
@property(assign) float titleWidthScale;	// G=0x332639f9; S=0x332639b1; converted property
+ (void)initialize;	// 0x33262219
+ (Class)layerClass;	// 0x332621fd
+ (id)polaroidPosterWithImageProxy:(id)imageProxy title:(id)title;	// 0x332621a1
+ (id)posterButtonWithImageProxy:(id)imageProxy title:(id)title;	// 0x33262051
+ (id)tilePosterWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x3326211d
+ (id)twoLinePosterButtonWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x332620ad
- (id)init;	// 0x33262289
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x332662a1
- (id)_artworkIdentifier;	// 0x3326659d
- (void)_clearCurrentImage;	// 0x332666a1
- (void)_cropImage:(id)image;	// 0x332674b1
- (id)_currentImage;	// 0x332659f1
- (CGRect)_currentImageRect;	// 0x33265b6d
- (void)_decorateImage:(id)image;	// 0x33267735
- (id)_decoratedImageIdentifier:(id)identifier size:(CGSize)size;	// 0x332676d5
- (void)_deletterboxImage:(id)image;	// 0x33267459
- (id)_fetchImage;	// 0x33266999
- (void)_focusWasChanged;	// 0x3326638d
- (id)_getDecoratedImage:(id)image imageID:(id)anId toSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x3326782d
- (id)_getImageFromCacheNamed:(id)cacheNamed withSize:(CGSize)size;	// 0x332668bd
- (BOOL)_imageIsCorrectSize:(id)size requiresTask:(BOOL *)task requiresDeletterBox:(BOOL *)box;	// 0x33266cdd
- (void)_imageLoadFailed:(id)failed;	// 0x33266bfd
- (BOOL)_imageRequiresCrop;	// 0x33265795
- (int)_imageSize;	// 0x33266675
- (void)_imageTaskComplete:(id)complete;	// 0x33267d89
- (void)_imageUpdated:(id)updated;	// 0x33266a5d
- (void)_lowMemoryNotification:(id)notification;	// 0x3326672d
- (CGRect)_mainImageRectFromMainImageUnitRect;	// 0x33265c19
- (CGRect)_maxImageRect;	// 0x33265a1d
- (id)_numberBadgeAttributes;	// 0x332665f1
- (id)_ordinalAttributes;	// 0x33266191
- (BOOL)_resizeImage:(id)image;	// 0x33266e2d
- (void)_restartImageResizing;	// 0x332665ad
- (void)_scaleImage:(id)image;	// 0x332675c9
- (void)_setArtworkIdentifier:(id)identifier;	// 0x33266475
- (void)_setAttributedTitle:(id)title withCrossfade:(BOOL)crossfade;	// 0x33266061
- (void)_setFinalFormImage:(id)image;	// 0x33267e81
- (void)_startDeletterboxTaskForImage:(id)image;	// 0x332672dd
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x33266ea5
- (id)_subtitleAttributes;	// 0x332656ad
- (id)_titleAttributes;	// 0x33265491
- (void)_updateDefaultArtwork;	// 0x332657e1
- (void)_updateDeferredArtwork;	// 0x3326676d
- (void)_updateTextLayerOpacity;	// 0x33265cdd
// converted property getter: - (id)accessibilityLabel;	// 0x332651b9
- (id)accessibilitySecondaryLabel;	// 0x33265221
// converted property getter: - (BOOL)alwaysShowTitles;	// 0x33263ad5
- (id)badge;	// 0x332652dd
// converted property getter: - (id)badgeImage;	// 0x332633a9
// converted property getter: - (float)badgeOpacity;	// 0x33263485
// converted property getter: - (int)badgePosition;	// 0x332633b9
// converted property getter: - (float)badgeScale;	// 0x33263405
- (void)cancelContainerViewLoad;	// 0x33265361
- (void)controlWasActivated;	// 0x33262595
- (void)controlWasDeactivated;	// 0x33262675
- (void)controlWasFocused;	// 0x33263fd9
- (void)controlWasUnfocused;	// 0x33264019
// converted property getter: - (float)cornerRadius;	// 0x3326320d
// converted property getter: - (BOOL)cropAndFill;	// 0x33263261
// converted property getter: - (float)cropAspectRatio;	// 0x332632c5
- (void)dealloc;	// 0x33262365
// converted property getter: - (id)defaultImage;	// 0x332627ed
// converted property getter: - (BOOL)deletterboxImage;	// 0x33263d19
- (id)description;	// 0x3326251d
- (CGRect)focusCursorFrame;	// 0x33263d29
// converted property getter: - (float)focusedBadgeOpacity;	// 0x33263505
- (void)hideTextLayers;	// 0x33264059
// converted property getter: - (id)image;	// 0x33263cf9
// converted property getter: - (id)imageProxy;	// 0x33262d5d
- (BOOL)isAccessibilityElement;	// 0x332651b5
- (void)layoutSubcontrols;	// 0x332640d9
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x332652ed
// converted property getter: - (int)numberBadgeValue;	// 0x33263805
// converted property getter: - (BOOL)onlyShowSubtitlesWhenFocused;	// 0x33263af5
// converted property getter: - (int)ordinal;	// 0x3326306d
// converted property getter: - (CGColorRef)posterBorderColor;	// 0x33262841
// converted property getter: - (float)posterBorderWidth;	// 0x3326288d
- (id)posterImage;	// 0x33265409
// converted property getter: - (int)posterStyle;	// 0x33262c99
- (float)preferredCursorRadius;	// 0x332652cd
// converted property getter: - (float)reflectionAmount;	// 0x33262e91
// converted property getter: - (float)reflectionBaseline;	// 0x33262edd
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x33265289
// converted property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x33263a75
- (void)setBadgeImage:(id)image atPosition:(int)position;	// 0x332632d5
// converted property setter: - (void)setBadgeOpacity:(float)opacity;	// 0x33263415
// converted property setter: - (void)setBadgeScale:(float)scale;	// 0x332633c9
// converted property setter: - (void)setCornerRadius:(float)radius;	// 0x332631ed
// converted property setter: - (void)setCropAndFill:(BOOL)fill;	// 0x3326321d
// converted property setter: - (void)setCropAspectRatio:(float)ratio;	// 0x33263271
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x33262791
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x33263d09
- (BOOL)setEnableDecoratedImageCache:(BOOL)cache;	// 0x33262d6d
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x33263495
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x332653bd
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x332653dd
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x33262dc9
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x33262ca9
- (void)setImageProxy:(id)proxy withSize:(int)size;	// 0x33262d3d
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x33263c21
- (void)setNonAttributedTitle:(id)title;	// 0x33263849
- (void)setNonAttributedTitleWithCrossfade:(id)crossfade;	// 0x33263901
// converted property setter: - (void)setNumberBadgeValue:(int)value;	// 0x33263515
// converted property setter: - (void)setOnlyShowSubtitlesWhenFocused:(BOOL)focused;	// 0x33263ae5
// converted property setter: - (void)setOrdinal:(int)ordinal;	// 0x33262eed
// converted property setter: - (void)setPosterBorderColor:(CGColorRef)color;	// 0x332627fd
// converted property setter: - (void)setPosterBorderWidth:(float)width;	// 0x33262851
// converted property setter: - (void)setPosterStyle:(int)style;	// 0x3326289d
- (void)setReadyToDisplay;	// 0x3326538d
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x33262e3d
// converted property setter: - (void)setReflectionBaseline:(float)baseline;	// 0x33262ea1
// converted property setter: - (void)setSpinnerEnabled:(BOOL)enabled;	// 0x332630b5
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x33263b05
// converted property setter: - (void)setTitle:(id)title;	// 0x33263815
// converted property setter: - (void)setTitleVerticalOffset:(float)offset;	// 0x33263a29
// converted property setter: - (void)setTitleWidthScale:(float)scale;	// 0x332639b1
- (void)setTitleWithCrossfade:(id)crossfade;	// 0x33263829
// converted property getter: - (BOOL)spinnerEnabled;	// 0x332631d5
// converted property getter: - (id)subtitle;	// 0x33263cd9
// converted property getter: - (id)title;	// 0x33263981
- (id)titleControl;	// 0x332639a1
// converted property getter: - (float)titleVerticalOffset;	// 0x33263a65
// converted property getter: - (float)titleWidthScale;	// 0x332639f9
@end
