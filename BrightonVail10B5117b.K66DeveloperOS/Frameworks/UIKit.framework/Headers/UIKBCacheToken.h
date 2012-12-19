/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface UIKBCacheToken : NSObject <NSCopying> {
	NSMutableArray *_components;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _emptyFields;	// 12 = 0xc
}
@property(assign, nonatomic) int displayHint;	// G=0x330636b1; S=0x330636e9; 
@property(assign, nonatomic) int emptyFields;	// G=0x33063de1; S=0x33063df1; @synthesize=_emptyFields
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x33063735; 
@property(retain, nonatomic) NSString *name;	// G=0x33063dc1; S=0x33063dd1; @synthesize=_name
@property(assign, nonatomic) int rowHint;	// G=0x3306362d; S=0x33063665; 
@property(assign, nonatomic) CGSize size;	// G=0x33063549; S=0x330635b1; 
@property(readonly, assign, nonatomic) NSString *string;	// G=0x32d9c939; 
+ (id)tokenForKey:(id)key style:(int)style state:(int)state;	// 0x32d9c6f1
+ (id)tokenForKey:(id)key style:(int)style state:(int)state clipCorners:(int)corners;	// 0x33063879
+ (id)tokenForKeyplane:(id)keyplane;	// 0x32d8cb49
+ (id)tokenTemplateFilledForKey:(id)key style:(int)style size:(CGSize)size;	// 0x33063c19
+ (id)tokenTemplateForKey:(id)key name:(id)name style:(int)style size:(CGSize)size;	// 0x33063abd
+ (id)tokenTemplateForKey:(id)key style:(int)style size:(CGSize)size;	// 0x33063a71
- (id)initWithComponents:(id)components name:(id)name;	// 0x32d8cca5
- (id)initWithComponents:(id)components name:(id)name emptyFields:(int)fields;	// 0x32d8ccc9
- (id)copyWithZone:(NSZone *)zone;	// 0x33063539
- (void)dealloc;	// 0x32d93ba9
// declared property getter: - (int)displayHint;	// 0x330636b1
// declared property getter: - (int)emptyFields;	// 0x33063de1
// declared property getter: - (BOOL)hasKey;	// 0x33063735
// declared property getter: - (id)name;	// 0x33063dc1
// declared property getter: - (int)rowHint;	// 0x3306362d
// declared property setter: - (void)setDisplayHint:(int)hint;	// 0x330636e9
// declared property setter: - (void)setEmptyFields:(int)fields;	// 0x33063df1
// declared property setter: - (void)setName:(id)name;	// 0x33063dd1
// declared property setter: - (void)setRowHint:(int)hint;	// 0x33063665
// declared property setter: - (void)setSize:(CGSize)size;	// 0x330635b1
// declared property getter: - (CGSize)size;	// 0x33063549
// declared property getter: - (id)string;	// 0x32d9c939
- (id)stringForKey:(id)key state:(int)state;	// 0x3306378d
- (id)stringForSplitState:(BOOL)splitState;	// 0x32d8cd55
- (id)stringForState:(int)state;	// 0x3306383d
@end
