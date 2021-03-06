/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIGroupItem : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	float offset;	// 8 = 0x8
	int _rowCountBeforeGroup;	// 12 = 0xc
	int _childCount;	// 16 = 0x10
	unsigned _isRadioGroup : 1;	// 20 = 0x14
	unsigned _isLabelGroup : 1;	// 20 = 0x14
	unsigned _reserved : 30;	// 20 = 0x14
}
@property(readonly, assign) int childCount;	// G=0x30731ae5; converted property
@property(readonly, assign) int rowCountBeforeGroup;	// G=0x30731b05; converted property
@property(readonly, retain) NSString *title;	// G=0x30731af5; converted property
- (id)initWithTitle:(id)title childCount:(int)count rowCountBeforeGroup:(int)group isRadioGroup:(BOOL)group4;	// 0x30732db1
// converted property getter: - (int)childCount;	// 0x30731ae5
- (void)dealloc;	// 0x30732d69
// converted property getter: - (int)rowCountBeforeGroup;	// 0x30731b05
- (int)tableRowForRow:(int)row;	// 0x30731b15
// converted property getter: - (id)title;	// 0x30731af5
@end

