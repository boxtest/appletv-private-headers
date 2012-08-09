/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRLocalizedStringManager : BRSingleton {
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
+ (id)_backRowFramework;	// 0x371389
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x370e39
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x370f0d
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x370ec9
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x370e85
+ (id)localizedLanguageForCode:(id)code;	// 0x371269
+ (id)localizedLanguageForIdentifier:(id)identifier;	// 0x3712f9
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x370fa1
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x3711c9
+ (void)setSingleton:(id)singleton;	// 0x370cad
+ (id)singleton;	// 0x370c9d
- (id)init;	// 0x370cbd
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x371545
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x371611
- (void)_languageChanged:(id)changed;	// 0x3713a5
- (void)dealloc;	// 0x370da9
@end
