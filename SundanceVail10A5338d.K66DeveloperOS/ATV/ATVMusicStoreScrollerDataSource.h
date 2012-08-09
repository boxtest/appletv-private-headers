/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreScrollerDataSource : XXUnknownSuperclass {
	NSArray *_controls;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *controls;	// G=0x1c5641; S=0x1c53b1; @synthesize=_controls
@property(retain, nonatomic) NSString *identifier;	// G=0x1c5651; S=0x1c5401; @synthesize=_identifier
- (void)_setControlIdentifiers;	// 0x1c5661
// declared property getter: - (id)controls;	// 0x1c5641
- (void)dealloc;	// 0x1c534d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1c5495
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x1c5535
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1c5475
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x1c54fd
// declared property getter: - (id)identifier;	// 0x1c5651
- (long)numberOfColumnsInGrid:(id)grid;	// 0x1c5471
- (long)numberOfItemsInGrid:(id)grid;	// 0x1c5451
// declared property setter: - (void)setControls:(id)controls;	// 0x1c53b1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x1c5401
@end
