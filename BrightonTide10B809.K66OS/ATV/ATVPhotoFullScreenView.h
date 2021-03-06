/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray;
@protocol ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoFullScreenView : BRControl {
	id<ATVPhotoFullScreenViewDataSource> dataSource;	// 84 = 0x54
	id<ATVPhotoFullScreenViewDelegate> delegate;	// 88 = 0x58
	BOOL prefetchImages;	// 92 = 0x5c
	long _startIndex;	// 96 = 0x60
	long _displayedItemIndex;	// 100 = 0x64
	BOOL _initialLayoutCompleted;	// 104 = 0x68
	int _startTouchXPosition;	// 108 = 0x6c
	float _curTouchOffset;	// 112 = 0x70
	NSMutableArray *_requestedImages;	// 116 = 0x74
	unsigned _lastRequestedItemIndex;	// 120 = 0x78
}
@property(assign, nonatomic) float _curTouchOffset;	// G=0x34bb85; S=0x34bb95; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x34bb25; S=0x34bb35; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x34bb45; S=0x34bb55; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x34bbc5; S=0x34bbd5; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x34bba5; S=0x34bbb5; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x34bb05; S=0x34bb15; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x34bb65; S=0x34bb75; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x34baa5; S=0x34bab5; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x34bac5; S=0x34bad5; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x34bae5; S=0x34baf5; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x34aa3d
- (id)initWithStartIndex:(long)startIndex;	// 0x34aa85
// declared property getter: - (float)_curTouchOffset;	// 0x34bb85
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x34b391
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x34b2d1
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x34b331
// declared property getter: - (long)_displayedItemIndex;	// 0x34bb25
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x34bb45
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x34bbc5
- (void)_requestNextImage;	// 0x34b87d
- (void)_requestedImageWritten:(id)written;	// 0x34ba19
// declared property getter: - (id)_requestedImages;	// 0x34bba5
- (void)_setImageLayerTargetBounds;	// 0x34b74d
// declared property getter: - (long)_startIndex;	// 0x34bb05
// declared property getter: - (int)_startTouchXPosition;	// 0x34bb65
- (id)accessibilityLabel;	// 0x34aeb1
- (BOOL)brEventAction:(id)action;	// 0x34af9d
- (void)controlWasActivated;	// 0x34ac39
- (void)controlWasDeactivated;	// 0x34acc9
// declared property getter: - (id)dataSource;	// 0x34baa5
- (void)dealloc;	// 0x34aba1
// declared property getter: - (id)delegate;	// 0x34bac5
- (BOOL)isAccessibilityElement;	// 0x34ad4d
- (void)layoutSubcontrols;	// 0x34ad51
// declared property getter: - (BOOL)prefetchImages;	// 0x34bae5
- (void)reload;	// 0x34ae59
// declared property setter: - (void)setDataSource:(id)source;	// 0x34bab5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34bad5
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x34baf5
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x34bb95
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x34bb35
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x34bb55
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x34bbd5
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x34bbb5
// declared property setter: - (void)set_startIndex:(long)index;	// 0x34bb15
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x34bb75
@end

