/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextClient.h"
#import "OADClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADDrawable, WDAAnchor, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject <OADClient, OADTextClient> {
@private
	WDAAnchor *mAnchor;	// 4 = 0x4
	WDATextBox *mTextBox;	// 8 = 0x8
	OADDrawable *mDrawable;	// 12 = 0xc
	int mTextType;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) WDAAnchor *anchor;	// G=0x30d1acf5; @synthesize=mAnchor
@property(assign) CGRect bounds;	// G=0x30c76ffd; S=0x30e68a75; converted property
@property(retain) id drawable;	// G=0x30d1b4d5; S=0x30d1aac9; converted property
@property(retain) id textBox;	// G=0x30d27155; S=0x30d1b449; converted property
@property(assign) int textType;	// G=0x30d23e01; S=0x30d1aae9; converted property
+ (Class)classForType:(unsigned short)type;	// 0x30e68b81
- (id)init;	// 0x30d1aa89
// declared property getter: - (id)anchor;	// 0x30d1acf5
// converted property getter: - (CGRect)bounds;	// 0x30c76ffd
- (void)clearAnchor;	// 0x30d9f955
- (id)createAnchor;	// 0x30d1ab75
- (id)createTextBoxWithDocument:(id)document textType:(int)type;	// 0x30e68aa1
- (void)dealloc;	// 0x30c84d79
// converted property getter: - (id)drawable;	// 0x30d1b4d5
- (BOOL)floating;	// 0x30d78761
- (BOOL)hasBounds;	// 0x30e689a1
- (BOOL)hasText;	// 0x30e689b9
- (bool)isLine;	// 0x30e68a31
- (bool)isShape;	// 0x30d26ac1
- (bool)isTopLevelObject;	// 0x30e68a01
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x30e68a75
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x30d1aac9
// converted property setter: - (void)setTextBox:(id)box;	// 0x30d1b449
// converted property setter: - (void)setTextType:(int)type;	// 0x30d1aae9
// converted property getter: - (id)textBox;	// 0x30d27155
// converted property getter: - (int)textType;	// 0x30d23e01
@end

