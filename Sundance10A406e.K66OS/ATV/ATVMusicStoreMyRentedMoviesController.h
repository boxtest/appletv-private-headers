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
@property(readonly, assign) BOOL allowOurselfToBeRemovedFromStack;	// G=0x202cb1; @synthesize=_allowOurselfToBeRemovedFromStack
@property(readonly, assign) BRCursorControl *cursor;	// G=0x202c89; @synthesize=_cursor
@property(readonly, assign) BRGridView *grid;	// G=0x202c75; @synthesize=_grid
@property(readonly, assign) int numberOfExistingRentals;	// G=0x202c9d; @synthesize=_numberOfExistingRentals
@property(readonly, assign) ATVRentedMediaProvider *rentals;	// G=0x202c4d; @synthesize=_rentals
@property(readonly, assign) BRScrollControl *scroller;	// G=0x202c61; @synthesize=_scroller
- (id)init;	// 0x2028bd
- (id)initWithRentalsProvider:(id)rentalsProvider;	// 0x202905
- (void)_rentalsUpdated:(id)updated;	// 0x202ba9
- (void)_setupView;	// 0x202cc9
// declared property getter: - (BOOL)allowOurselfToBeRemovedFromStack;	// 0x202cb1
// declared property getter: - (id)cursor;	// 0x202c89
- (void)dealloc;	// 0x202a05
// declared property getter: - (id)grid;	// 0x202c75
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x202c41
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x202bdd
- (void)layoutSubcontrols;	// 0x202abd
- (long)numberOfColumnsInGrid:(id)grid;	// 0x202bd9
// declared property getter: - (int)numberOfExistingRentals;	// 0x202c9d
- (long)numberOfItemsInGrid:(id)grid;	// 0x202bb9
// declared property getter: - (id)rentals;	// 0x202c4d
// declared property getter: - (id)scroller;	// 0x202c61
@end
