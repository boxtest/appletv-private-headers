/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"

@class BRTextControl, BRImage, BRImageControl, BRVideoChapterProvider, BRCoverArtPreviewControl, BRReflectionControl, BRWaitPromptControl, BRMediaPlayer, BRTabControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
@private
	BRImage *_currentVideoFrame;	// 48 = 0x30
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 52 = 0x34
	BRImageControl *_screenShotPreviewControl;	// 56 = 0x38
	BRReflectionControl *_reflectionToPreviewControl;	// 60 = 0x3c
	BRVideoChapterProvider *_chapterProvider;	// 64 = 0x40
	BRCoverArtPreviewControl *_preview;	// 68 = 0x44
	BRControl *_csaPicker;	// 72 = 0x48
	BRTabControl *_tabControl;	// 76 = 0x4c
	BRTextControl *_titleControl;	// 80 = 0x50
	BRMediaPlayer *_player;	// 84 = 0x54
	BRControl *_currentContentControl;	// 88 = 0x58
	BRControl *_chapterPicker;	// 92 = 0x5c
	BRWaitPromptControl *_spinner;	// 96 = 0x60
	BOOL _controlWasActivated;	// 100 = 0x64
	BOOL _controlWasDeactivated;	// 101 = 0x65
}
+ (id)controlWithPlayer:(id)player;	// 0x35de508d
- (id)init;	// 0x35de50e9
- (void)_addCSAPicker;	// 0x35de6a61
- (void)_addFullScreenVideoSnapshot;	// 0x35de6749
- (void)_animatePreviewBackToScreenshot;	// 0x35de6751
- (void)_animateScreenshotToPreview;	// 0x35de674d
- (BOOL)_chapterPreviewsAvailable;	// 0x35de5e45
- (void)_createCSAPicker;	// 0x35de6795
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x35de6aa1
- (void)_loadAudioList;	// 0x35de6481
- (void)_loadChapters;	// 0x35de5f05
- (void)_loadGraphicalChapterList;	// 0x35de60bd
- (void)_loadMediaOptionList:(id)list selectedOption:(id)option selectionHandler:(id)handler;	// 0x35de6511
- (void)_loadSubtitleList;	// 0x35de63f1
- (void)_loadTextualChapterList;	// 0x35de5f45
- (void)_setAudioOption:(id)option;	// 0x35de5dcd
- (void)_setChapter:(id)chapter;	// 0x35de5aad
- (void)_setSubtitleOption:(id)option;	// 0x35de5c15
- (id)_titleControlItemLabelAttributes;	// 0x35de6b59
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x35de5a19
- (BOOL)brEventAction:(id)action;	// 0x35de58f1
- (void)controlWasActivated;	// 0x35de56b1
- (void)dealloc;	// 0x35de5189
- (void)layoutSubcontrols;	// 0x35de5705
- (void)orderOut;	// 0x35de5661
- (void)setPlayer:(id)player;	// 0x35de52d9
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x35de59ad
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x35de5a11
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x35de5a15
@end

