/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id alignmentInfo;	// G=0x31db1621; S=0x31c4822d; converted property
@property(retain) id protection;	// G=0x31db1631; S=0x31c482a5; converted property
@property(retain) id text;	// G=0x31c49f51; S=0x31c482e9; converted property
+ (id)textBox;	// 0x31c48155
// converted property getter: - (id)alignmentInfo;	// 0x31db1621
- (void)dealloc;	// 0x31c52c19
// converted property getter: - (id)protection;	// 0x31db1631
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x31c4822d
// converted property setter: - (void)setProtection:(id)protection;	// 0x31c482a5
// converted property setter: - (void)setText:(id)text;	// 0x31c482e9
// converted property getter: - (id)text;	// 0x31c49f51
@end

