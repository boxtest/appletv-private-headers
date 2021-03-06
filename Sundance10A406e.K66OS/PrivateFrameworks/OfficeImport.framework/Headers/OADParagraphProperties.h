/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADCharacterProperties.h"

@class OADBulletFont, OADTextSpacing, NSMutableArray, OADBulletProperties, OADBulletSize, OADBulletColor;

@interface OADParagraphProperties : OADCharacterProperties {
	OADBulletSize *mBulletSize;	// 100 = 0x64
	OADBulletColor *mBulletColor;	// 104 = 0x68
	OADBulletFont *mBulletFont;	// 108 = 0x6c
	OADBulletProperties *mBulletProperties;	// 112 = 0x70
	OADTextSpacing *mLineSpacing;	// 116 = 0x74
	OADTextSpacing *mBeforeSpacing;	// 120 = 0x78
	OADTextSpacing *mAfterSpacing;	// 124 = 0x7c
	NSMutableArray *mTabStops;	// 128 = 0x80
	double mLeftMargin;	// 132 = 0x84
	double mRightMargin;	// 140 = 0x8c
	double mIndent;	// 148 = 0x94
	double mDefaultTab;	// 156 = 0x9c
	int mLevel;	// 164 = 0xa4
	int mBulletCharSet;	// 168 = 0xa8
	unsigned char mAlign;	// 172 = 0xac
	unsigned char mWrap;	// 173 = 0xad
	unsigned char mFontAlign;	// 174 = 0xae
	unsigned mIsRightToLeft : 1;	// 175 = 0xaf
	unsigned mIsLatinLineBreak : 1;	// 175 = 0xaf
	unsigned mIsHangingPunctuation : 1;	// 175 = 0xaf
	unsigned mHasTabStops : 1;	// 175 = 0xaf
	unsigned mHasLeftMargin : 1;	// 175 = 0xaf
	unsigned mHasRightMargin : 1;	// 175 = 0xaf
	unsigned mHasLevel : 1;	// 175 = 0xaf
	unsigned mHasIndent : 1;	// 175 = 0xaf
	unsigned mHasAlign : 1;	// 176 = 0xb0
	unsigned mHasDefaultTab : 1;	// 176 = 0xb0
	unsigned mHasIsRightToLeft : 1;	// 176 = 0xb0
	unsigned mHasWrap : 1;	// 176 = 0xb0
	unsigned mHasFontAlign : 1;	// 176 = 0xb0
	unsigned mHasIsLatinLineBreak : 1;	// 176 = 0xb0
	unsigned mHasIsHangingPunctuation : 1;	// 176 = 0xb0
	unsigned mHasBulletCharSet : 1;	// 176 = 0xb0
}
@property(retain) id afterSpacing;	// G=0x34e77db9; S=0x34e5da61; converted property
@property(assign) int align;	// G=0x34e77fbd; S=0x34e5db45; converted property
@property(retain) id beforeSpacing;	// G=0x34e77d51; S=0x34e5da21; converted property
@property(assign, nonatomic) int bulletCharSet;	// G=0x34fe4b41; S=0x34f8ff19; 
@property(retain) id bulletColor;	// G=0x34e78229; S=0x34e5dcb9; converted property
@property(retain) id bulletFont;	// G=0x34e78291; S=0x34e5dcf9; converted property
@property(retain) id bulletProperties;	// G=0x34e782f9; S=0x34e5dd39; converted property
@property(retain) id bulletSize;	// G=0x34e781c1; S=0x34e5dc79; converted property
@property(assign) double defaultTab;	// G=0x34e78029; S=0x34e5db69; converted property
@property(assign) int fontAlign;	// G=0x350a76c9; S=0x34e5dbf1; converted property
@property(assign, nonatomic) BOOL hasBulletCharSet;	// G=0x34e7832d; S=0x34f8fefd; 
@property(assign) double indent;	// G=0x34e77f49; S=0x34e5db19; converted property
@property(assign) BOOL isHangingPunctuation;	// G=0x350a7731; S=0x34e5dc55; converted property
@property(assign) BOOL isLatinLineBreak;	// G=0x350a76fd; S=0x34e5dc19; converted property
@property(assign) BOOL isRightToLeft;	// G=0x350a765d; S=0x34e5db99; converted property
@property(assign) double leftMargin;	// G=0x34e77525; S=0x34e5da9d; converted property
@property(assign) int level;	// G=0x34e77edd; S=0x34e5daf5; converted property
@property(retain) id lineSpacing;	// G=0x34e77ce9; S=0x34e5d9a1; converted property
@property(assign) double rightMargin;	// G=0x350a7621; S=0x34e5dac9; converted property
@property(assign) int wrap;	// G=0x350a7695; S=0x34e5dbcd; converted property
+ (id)defaultProperties;	// 0x34e73219
- (id)init;	// 0x34e731e9
- (id)initWithDefaults;	// 0x34e5ca89
- (id)addTabStop;	// 0x34fe20c9
// converted property getter: - (id)afterSpacing;	// 0x34e77db9
// converted property getter: - (int)align;	// 0x34e77fbd
// converted property getter: - (id)beforeSpacing;	// 0x34e77d51
// declared property getter: - (int)bulletCharSet;	// 0x34fe4b41
// converted property getter: - (id)bulletColor;	// 0x34e78229
// converted property getter: - (id)bulletFont;	// 0x34e78291
// converted property getter: - (id)bulletProperties;	// 0x34e782f9
// converted property getter: - (id)bulletSize;	// 0x34e781c1
- (void)clearTabStops;	// 0x350a75b1
- (void)dealloc;	// 0x34e76871
// converted property getter: - (double)defaultTab;	// 0x34e78029
// converted property getter: - (int)fontAlign;	// 0x350a76c9
- (BOOL)hasAfterSpacing;	// 0x34e77d85
- (BOOL)hasAlign;	// 0x34e77f85
- (BOOL)hasBeforeSpacing;	// 0x34e77d1d
// declared property getter: - (BOOL)hasBulletCharSet;	// 0x34e7832d
- (BOOL)hasBulletColor;	// 0x34e781f5
- (BOOL)hasBulletFont;	// 0x34e7825d
- (BOOL)hasBulletProperties;	// 0x34e782c5
- (BOOL)hasBulletSize;	// 0x34e7818d
- (BOOL)hasDefaultTab;	// 0x34e77ff1
- (BOOL)hasFontAlign;	// 0x34e780d9
- (BOOL)hasIndent;	// 0x34e77f11
- (BOOL)hasIsHangingPunctuation;	// 0x34e78151
- (BOOL)hasIsLatinLineBreak;	// 0x34e78115
- (BOOL)hasIsRightToLeft;	// 0x34e78065
- (BOOL)hasLeftMargin;	// 0x34e775d5
- (BOOL)hasLevel;	// 0x34e77ea5
- (BOOL)hasLineSpacing;	// 0x34e77cb5
- (BOOL)hasRightMargin;	// 0x34e77e01
- (BOOL)hasTabStops;	// 0x34e77ded
- (BOOL)hasWrap;	// 0x34e7809d
- (unsigned)hash;	// 0x350a7765
// converted property getter: - (double)indent;	// 0x34e77f49
- (BOOL)isEqual:(id)equal;	// 0x350a79b9
// converted property getter: - (BOOL)isHangingPunctuation;	// 0x350a7731
// converted property getter: - (BOOL)isLatinLineBreak;	// 0x350a76fd
// converted property getter: - (BOOL)isRightToLeft;	// 0x350a765d
// converted property getter: - (double)leftMargin;	// 0x34e77525
// converted property getter: - (int)level;	// 0x34e77edd
// converted property getter: - (id)lineSpacing;	// 0x34e77ce9
- (double)nonOveridenLeftMargin;	// 0x34ed6689
- (void)overrideWithProperties:(id)properties;	// 0x34e77611
- (void)removeUnnecessaryOverrides;	// 0x34ec77f9
// converted property getter: - (double)rightMargin;	// 0x350a7621
// converted property setter: - (void)setAfterSpacing:(id)spacing;	// 0x34e5da61
// converted property setter: - (void)setAlign:(int)align;	// 0x34e5db45
// converted property setter: - (void)setBeforeSpacing:(id)spacing;	// 0x34e5da21
// declared property setter: - (void)setBulletCharSet:(int)set;	// 0x34f8ff19
// converted property setter: - (void)setBulletColor:(id)color;	// 0x34e5dcb9
// converted property setter: - (void)setBulletFont:(id)font;	// 0x34e5dcf9
// converted property setter: - (void)setBulletProperties:(id)properties;	// 0x34e5dd39
// converted property setter: - (void)setBulletSize:(id)size;	// 0x34e5dc79
// converted property setter: - (void)setDefaultTab:(double)tab;	// 0x34e5db69
// converted property setter: - (void)setFontAlign:(int)align;	// 0x34e5dbf1
// declared property setter: - (void)setHasBulletCharSet:(BOOL)set;	// 0x34f8fefd
// converted property setter: - (void)setIndent:(double)indent;	// 0x34e5db19
// converted property setter: - (void)setIsHangingPunctuation:(BOOL)punctuation;	// 0x34e5dc55
// converted property setter: - (void)setIsLatinLineBreak:(BOOL)aBreak;	// 0x34e5dc19
// converted property setter: - (void)setIsRightToLeft:(BOOL)left;	// 0x34e5db99
// converted property setter: - (void)setLeftMargin:(double)margin;	// 0x34e5da9d
// converted property setter: - (void)setLevel:(int)level;	// 0x34e5daf5
// converted property setter: - (void)setLineSpacing:(id)spacing;	// 0x34e5d9a1
// converted property setter: - (void)setRightMargin:(double)margin;	// 0x34e5dac9
// converted property setter: - (void)setWrap:(int)wrap;	// 0x34e5dbcd
- (id)tabStopAtIndex:(unsigned)index;	// 0x350a7591
- (unsigned)tabStopCount;	// 0x350a7571
- (id)tabStops;	// 0x34fe796d
// converted property getter: - (int)wrap;	// 0x350a7695
@end

