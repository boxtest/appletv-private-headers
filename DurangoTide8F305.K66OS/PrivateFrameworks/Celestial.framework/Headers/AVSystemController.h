/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVSystemController : NSObject {
	AVSystemControllerPrivate *_priv;	// 4 = 0x4
}
+ (void)initialize;	// 0x3264a541
+ (id)sharedAVSystemController;	// 0x3264a579
- (id)init;	// 0x3264a631
- (id)attributeForKey:(id)key;	// 0x3265597d
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x32663385
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x326642b9
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x326641e1
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x3266409d
- (BOOL)currentRouteHasVolumeControl;	// 0x32664ba1
- (void)dealloc;	// 0x32657025
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x32664a9d
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x32664101
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x326640c9
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x3266333d
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x32664209
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3266418d
- (BOOL)getPortDiscoveryEnabled;	// 0x32664c11
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x32664045
- (void)handleServerDied;	// 0x32656f95
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x326632ad
- (BOOL)okToNotifyFromThisThread;	// 0x32664469
- (id)pickableRoutesForCategory:(id)category;	// 0x3266443d
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x32663749
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x32664315
- (id)routeForCategory:(id)category;	// 0x326643cd
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x32663361
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x32664261
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x326641b9
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3266448d
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x32664af1
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x32664071
- (BOOL)toggleActiveCategoryMuted;	// 0x32664165
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x32664139
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x32664411
@end
