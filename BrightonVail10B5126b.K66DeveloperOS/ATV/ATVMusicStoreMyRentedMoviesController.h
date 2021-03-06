/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRGridView, BRScrollControl, BRCursorControl, ATVRentedMediaProvider;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMyRentedMoviesController : BRController {
	ATVRentedMediaProvider *_rentals;	// 100 = 0x64
	BRScrollControl *_scroller;	// 104 = 0x68
	BRGridView *_grid;	// 108 = 0x6c
	BRCursorControl *_cursor;	// 112 = 0x70
	int _numberOfExistingRentals;	// 116 = 0x74
	BOOL _allowOurselfToBeRemovedFromStack;	// 120 = 0x78
}
@property(readonly, assign) BOOL allowOurselfToBeRemovedFromStack;	// G=0x2124f9; @synthesize=_allowOurselfToBeRemovedFromStack
@property(readonly, assign) BRCursorControl *cursor;	// G=0x2124d1; @synthesize=_cursor
@property(readonly, assign) BRGridView *grid;	// G=0x2124bd; @synthesize=_grid
@property(readonly, assign) int numberOfExistingRentals;	// G=0x2124e5; @synthesize=_numberOfExistingRentals
@property(readonly, assign) ATVRentedMediaProvider *rentals;	// G=0x212495; @synthesize=_rentals
@property(readonly, assign) BRScrollControl *scroller;	// G=0x2124a9; @synthesize=_scroller
- (id)init;	// 0x212105
- (id)initWithRentalsProvider:(id)rentalsProvider;	// 0x21214d
- (void)_rentalsUpdated:(id)updated;	// 0x2123f1
- (void)_setupView;	// 0x212511
// declared property getter: - (BOOL)allowOurselfToBeRemovedFromStack;	// 0x2124f9
// declared property getter: - (id)cursor;	// 0x2124d1
- (void)dealloc;	// 0x21224d
// declared property getter: - (id)grid;	// 0x2124bd
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x212489
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x212425
- (void)layoutSubcontrols;	// 0x212305
- (long)numberOfColumnsInGrid:(id)grid;	// 0x212421
// declared property getter: - (int)numberOfExistingRentals;	// 0x2124e5
- (long)numberOfItemsInGrid:(id)grid;	// 0x212401
// declared property getter: - (id)rentals;	// 0x212495
// declared property getter: - (id)scroller;	// 0x2124a9
@end

