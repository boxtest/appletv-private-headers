/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVSettingsHelper : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x35d1de05
+ (id)singleton;	// 0x35d1ddf5
- (id)init;	// 0x35d1de15
- (void)dealloc;	// 0x35d1de7d
- (BOOL)haveWeQuitSinceBoot;	// 0x35d1dfdd
- (BOOL)performObliterate;	// 0x35d1decd
- (BOOL)performRestore;	// 0x35d1dfd9
- (BOOL)performUpdates:(id)updates;	// 0x35d1deb5
- (void)reboot;	// 0x35d1e07d
- (BOOL)setLowPowerMode:(BOOL)mode;	// 0x35d1deb1
- (BOOL)setNetworkSettings:(id)settings forInterface:(int)interface;	// 0x35d1dead
- (void)setSSHEnabled:(BOOL)enabled;	// 0x35d1e091
- (BOOL)setSystemLanguage:(id)language;	// 0x35d1dea9
@end

