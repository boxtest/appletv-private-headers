/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableArray;
@protocol ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoFullScreenView : BRControl {
	id<ATVPhotoFullScreenViewDataSource> dataSource;	// 80 = 0x50
	id<ATVPhotoFullScreenViewDelegate> delegate;	// 84 = 0x54
	BOOL prefetchImages;	// 88 = 0x58
	long _startIndex;	// 92 = 0x5c
	long _displayedItemIndex;	// 96 = 0x60
	BOOL _initialLayoutCompleted;	// 100 = 0x64
	int _startTouchXPosition;	// 104 = 0x68
	float _curTouchOffset;	// 108 = 0x6c
	NSMutableArray *_requestedImages;	// 112 = 0x70
	unsigned _lastRequestedItemIndex;	// 116 = 0x74
}
@property(assign, nonatomic) float _curTouchOffset;	// G=0x31e6b1; S=0x31e6c1; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x31e651; S=0x31e661; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x31e671; S=0x31e681; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x31e6f1; S=0x31e701; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x31e6d1; S=0x31e6e1; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x31e631; S=0x31e641; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x31e691; S=0x31e6a1; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x31e5d1; S=0x31e5e1; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x31e5f1; S=0x31e601; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x31e611; S=0x31e621; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x31d569
- (id)initWithStartIndex:(long)startIndex;	// 0x31d5b1
// declared property getter: - (float)_curTouchOffset;	// 0x31e6b1
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x31debd
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x31ddfd
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x31de5d
// declared property getter: - (long)_displayedItemIndex;	// 0x31e651
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x31e671
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x31e6f1
- (void)_requestNextImage;	// 0x31e3a9
- (void)_requestedImageWritten:(id)written;	// 0x31e545
// declared property getter: - (id)_requestedImages;	// 0x31e6d1
- (void)_setImageLayerTargetBounds;	// 0x31e279
// declared property getter: - (long)_startIndex;	// 0x31e631
// declared property getter: - (int)_startTouchXPosition;	// 0x31e691
- (id)accessibilityLabel;	// 0x31d9dd
- (BOOL)brEventAction:(id)action;	// 0x31dac9
- (void)controlWasActivated;	// 0x31d765
- (void)controlWasDeactivated;	// 0x31d7f5
// declared property getter: - (id)dataSource;	// 0x31e5d1
- (void)dealloc;	// 0x31d6cd
// declared property getter: - (id)delegate;	// 0x31e5f1
- (BOOL)isAccessibilityElement;	// 0x31d879
- (void)layoutSubcontrols;	// 0x31d87d
// declared property getter: - (BOOL)prefetchImages;	// 0x31e611
- (void)reload;	// 0x31d985
// declared property setter: - (void)setDataSource:(id)source;	// 0x31e5e1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31e601
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x31e621
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x31e6c1
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x31e661
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x31e681
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x31e701
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x31e6e1
// declared property setter: - (void)set_startIndex:(long)index;	// 0x31e641
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x31e6a1
@end

