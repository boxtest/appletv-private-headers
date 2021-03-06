/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette> {
@private
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x318da5b1
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x31a47321
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x318da5c9
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x31ace99d
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x319dbfe5
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x319e173d
- (void)addDefaultPalette;	// 0x31ace9c9
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x31a0e161
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x319e1619
- (id)colorWithIndex:(unsigned)index;	// 0x319e653d
- (unsigned)defaultColorsCount;	// 0x31ace98d
- (void)setupDefaults;	// 0x319dc035
@end

