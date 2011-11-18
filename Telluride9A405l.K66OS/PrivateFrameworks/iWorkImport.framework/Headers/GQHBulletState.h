/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHBulletState : NSObject {
@private
	CFArrayRef mLevels;	// 4 = 0x4
	int mCurrentLevel;	// 8 = 0x8
}
@property(assign) int currentLevel;	// G=0x3425a9e1; S=0x3425abb1; converted property
+ (CFStringRef)createLabelStr:(int)str number:(int)number;	// 0x3425ab19
- (id)init;	// 0x3425b0c5
- (CFStringRef)bulletChar:(int)aChar;	// 0x3425aed1
- (int)bulletIndentForLevel:(int)level;	// 0x3425ae75
- (CFStringRef)createTieredNumberStringForLevel:(int)level;	// 0x3425ac4d
// converted property getter: - (int)currentLevel;	// 0x3425a9e1
- (void)dealloc;	// 0x3425b085
- (BOOL)hasNumberAtLevel:(int)level;	// 0x3425afb5
- (int)labelTypeAtLevel:(int)level;	// 0x3425af2d
- (id)listStyleAtLevel:(int)level;	// 0x3425ad8d
- (int)numberAtLevel:(int)level;	// 0x3425af89
- (void)setBulletChar:(CFStringRef)aChar level:(int)level;	// 0x3425aefd
- (void)setBulletIndent:(int)indent level:(int)level;	// 0x3425aea1
// converted property setter: - (void)setCurrentLevel:(int)level;	// 0x3425abb1
- (void)setLabelType:(int)type level:(int)level;	// 0x3425af59
- (void)setListStyle:(id)style atLevel:(int)level;	// 0x3425adcd
- (void)setNumber:(int)number level:(int)level;	// 0x3425afe1
- (void)setTextIndent:(int)indent level:(int)level;	// 0x3425ae45
- (void)setType:(int)type level:(int)level;	// 0x3425b055
- (int)textIndentForLevel:(int)level;	// 0x3425ae19
- (int)typeAtlevel:(int)atlevel;	// 0x3425b029
@end

