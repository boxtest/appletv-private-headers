/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRFullScreenPhotoControllerDelegate.h"

@class BRTextControl, BRGridControl, NSString, BRCursorControl, BRScrollControl, BRWaitSpinnerControl, NSTimer, NSDateFormatter, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserController : BRController <BRFullScreenPhotoControllerDelegate> {
	id<BRProvider> _provider;	// 100 = 0x64
	int _style;	// 104 = 0x68
	NSString *_subtitleKey;	// 108 = 0x6c
	NSDateFormatter *_formatter;	// 112 = 0x70
	long _providerDataCount;	// 116 = 0x74
	BRGridControl *_grid;	// 120 = 0x78
	BRWaitSpinnerControl *_spinner;	// 124 = 0x7c
	BRCursorControl *_cursorControl;	// 128 = 0x80
	BRScrollControl *_scroller;	// 132 = 0x84
	BRTextControl *_noContentMessageControl;	// 136 = 0x88
	NSTimer *_noContentMessageTimer;	// 140 = 0x8c
	BOOL _isNetworkDependent;	// 144 = 0x90
	BOOL _isValidWithZeroData;	// 145 = 0x91
	BOOL _useCorkBoardBackground;	// 146 = 0x92
	id _screenSaverSetCollectionBlock;	// 148 = 0x94
	double noContentErrorDisplayDelay;	// 152 = 0x98
	BRPhotoBrowserBannerButton *_settingsButton;	// 160 = 0xa0
	BRPhotoBrowserHeaderControl *_header;	// 164 = 0xa4
	BRPhotoBrowserBannerButton *_useForScreensaverButton;	// 168 = 0xa8
	id _onUpdateButtons;	// 172 = 0xac
	BRPhotoBrowserBannerButton *_slideshowButton;	// 176 = 0xb0
}
@property(assign) int columnCount;	// G=0x34f96d; S=0x34f921; converted property
@property(assign) int cursorStyle;	// G=0x34f8e1; S=0x34f8c1; converted property
@property(assign) BOOL displaysCount;	// G=0x34f71d; S=0x34f6e1; converted property
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0x3503d5; S=0x3503e5; @synthesize=_header
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x34f941; S=0x34f901; converted property
@property(retain) id icon;	// G=0x34f77d; S=0x34f741; converted property
@property(assign) XXStruct_qlg9jA iconVerticalOffset;	// G=0x34f7d9; S=0x34f79d; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x34fe55; S=0x34fe45; converted property
@property(assign) BOOL isValidWithZeroData;	// G=0x34fe75; S=0x34fe65; converted property
@property(assign, nonatomic) double noContentErrorDisplayDelay;	// G=0x350389; S=0x3503a1; @synthesize
@property(copy, nonatomic) id onUpdateButtons;	// G=0x350415; S=0x350429; @synthesize=_onUpdateButtons
@property(retain) id provider;	// G=0x34eef5; S=0x34ee01; converted property
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x34f6c1; S=0x34f6a1; 
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x350365; S=0x350379; @synthesize=_screenSaverSetCollectionBlock
@property(retain, nonatomic) BRPhotoBrowserBannerButton *settingsButton;	// G=0x3503b5; S=0x3503c5; @synthesize=_settingsButton
@property(retain, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x350439; S=0x350449; @synthesize=_slideshowButton
@property(assign) int style;	// G=0x34f4b9; S=0x34f175; converted property
@property(retain) id subtitle;	// G=0x34f841; S=0x34f805; converted property
@property(retain) NSString *subtitleKey;	// G=0x34f8b1; S=0x34f861; converted property
@property(retain) id title;	// G=0x34f551; S=0x34f4c9; converted property
@property(retain, nonatomic) BRPhotoBrowserBannerButton *useForScreensaverButton;	// G=0x3503f5; S=0x350405; @synthesize=_useForScreensaverButton
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x34f9ad; S=0x34f98d; converted property
+ (id)controllerForProvider:(id)provider;	// 0x34e8ed
+ (id)controllerForProvider:(id)provider style:(int)style;	// 0x34e94d
- (id)initWithProvider:(id)provider;	// 0x34e939
- (id)initWithProvider:(id)provider style:(int)style;	// 0x34e99d
- (id)_containerCollection;	// 0x3509c1
- (void)_focusChanged:(id)changed;	// 0x3517c5
- (void)_handleDeletePhotoStreamItemSelection:(id)selection;	// 0x351691
- (void)_handleProviderDataCountChange;	// 0x350c59
- (void)_handleSelection:(id)selection;	// 0x350ec1
- (void)_handleSlideshowSelection:(id)selection;	// 0x3512b5
- (void)_handleUseForScreensaverSelection:(id)screensaverSelection;	// 0x35144d
- (void)_hideNoContentMessage;	// 0x350ac5
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inCollection:(id)collection withOptions:(id)options;	// 0x350b61
- (id)_mediaItemInContainingControl:(id)containingControl;	// 0x350e21
- (void)_noContentTimerFired:(id)fired;	// 0x350b01
- (void)_playerStateChanged:(id)changed;	// 0x351819
- (void)_providerUpdated:(id)updated;	// 0x351809
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x35192d
- (void)_setupControls;	// 0x350459
- (void)_showNoContentMessage;	// 0x350a11
- (void)_slideshowPlayerAssetChanged:(id)changed;	// 0x3518b5
- (id)_subtitleStringForKey:(id)key;	// 0x3507c9
- (id)accessibilityLabel;	// 0x3500fd
- (BOOL)brEventAction:(id)action;	// 0x34fe85
// converted property getter: - (int)columnCount;	// 0x34f96d
- (void)controlWasActivated;	// 0x34eff9
- (void)controlWasDeactivated;	// 0x34f0e5
// converted property getter: - (int)cursorStyle;	// 0x34f8e1
- (void)dealloc;	// 0x34ec95
// converted property getter: - (BOOL)displaysCount;	// 0x34f71d
// declared property getter: - (id)header;	// 0x3503d5
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x34f941
// converted property getter: - (id)icon;	// 0x34f77d
// converted property getter: - (XXStruct_qlg9jA)iconVerticalOffset;	// 0x34f7d9
// converted property getter: - (BOOL)isNetworkDependent;	// 0x34fe55
- (BOOL)isValidAfterDataUpdate;	// 0x34f139
// converted property getter: - (BOOL)isValidWithZeroData;	// 0x34fe75
- (void)layoutSubcontrols;	// 0x34facd
// declared property getter: - (double)noContentErrorDisplayDelay;	// 0x350389
// declared property getter: - (id)onUpdateButtons;	// 0x350415
- (void)photoPlaybackWillStartForPlayer:(id)photoPlayback;	// 0x35012d
// converted property getter: - (id)provider;	// 0x34eef5
- (id)providersForContextMenu;	// 0x3501bd
// declared property getter: - (id)rightJustifiedText;	// 0x34f6c1
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x350365
// converted property setter: - (void)setColumnCount:(int)count;	// 0x34f921
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x34f8c1
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x34f6e1
// declared property setter: - (void)setHeader:(id)header;	// 0x3503e5
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x34f901
// converted property setter: - (void)setIcon:(id)icon;	// 0x34f741
// converted property setter: - (void)setIconVerticalOffset:(XXStruct_qlg9jA)offset;	// 0x34f79d
- (void)setIndex:(unsigned)index;	// 0x34f571
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x34fe45
// converted property setter: - (void)setIsValidWithZeroData:(BOOL)zeroData;	// 0x34fe65
- (void)setLastViewedSlideIndex:(int)index;	// 0x35011d
// declared property setter: - (void)setNoContentErrorDisplayDelay:(double)delay;	// 0x3503a1
// declared property setter: - (void)setOnUpdateButtons:(id)buttons;	// 0x350429
// converted property setter: - (void)setProvider:(id)provider;	// 0x34ee01
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x34f6a1
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x350379
// declared property setter: - (void)setSettingsButton:(id)button;	// 0x3503c5
// declared property setter: - (void)setSlideshowButton:(id)button;	// 0x350449
// converted property setter: - (void)setStyle:(int)style;	// 0x34f175
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x34f805
// converted property setter: - (void)setSubtitleKey:(id)key;	// 0x34f861
// converted property setter: - (void)setTitle:(id)title;	// 0x34f4c9
// declared property setter: - (void)setUseForScreensaverButton:(id)screensaverButton;	// 0x350405
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x34f98d
// declared property getter: - (id)settingsButton;	// 0x3503b5
// declared property getter: - (id)slideshowButton;	// 0x350439
// converted property getter: - (int)style;	// 0x34f4b9
// converted property getter: - (id)subtitle;	// 0x34f841
// converted property getter: - (id)subtitleKey;	// 0x34f8b1
// converted property getter: - (id)title;	// 0x34f551
// declared property getter: - (id)useForScreensaverButton;	// 0x3503f5
- (id)useForScreensaverButtonForCollection:(id)collection preHandler:(id)handler isCurrentlySet:(BOOL *)set;	// 0x34f9d9
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x34f9ad
- (void)wasBuried;	// 0x34ef59
- (void)wasExhumed;	// 0x34efa9
- (void)wasPushed;	// 0x34ef05
@end
