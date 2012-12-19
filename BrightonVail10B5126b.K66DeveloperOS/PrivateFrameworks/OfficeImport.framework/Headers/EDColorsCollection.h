/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


@interface EDColorsCollection : EDCollection <OADColorPalette> {
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x34894e85
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x34907a75
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x34894e99
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x34a267a5
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x34891921
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x3489a009
- (void)addDefaultPalette;	// 0x34a267d1
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x3496e7c1
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x34899eed
- (id)colorWithIndex:(unsigned)index;	// 0x348a1f61
- (unsigned)defaultColorsCount;	// 0x34a26795
- (const unsigned *)defaultPalette;	// 0x34899ffd
- (void)setupDefaults;	// 0x3489197d
@end
