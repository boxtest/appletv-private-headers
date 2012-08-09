/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAUIAddViews, NSString, NSURL, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAUIAddViews *alternativePunchOut;	// G=0x37987841; S=0x37987895; 
@property(copy, nonatomic) NSString *appDisplayName;	// G=0x379878d1; S=0x379878ed; 
@property(retain, nonatomic) SAUIImageResource *appIcon;	// G=0x3798793d; S=0x37987991; 
@property(assign, nonatomic) BOOL appInstalled;	// G=0x379879cd; S=0x37987a45; 
@property(copy, nonatomic) NSString *bundleId;	// G=0x37987a89; S=0x37987aa5; 
@property(copy, nonatomic) NSString *punchOutName;	// G=0x37987af5; S=0x37987b11; 
@property(copy, nonatomic) NSURL *punchOutUri;	// G=0x37987b61; S=0x37987bdd; 
+ (id)appPunchOut;	// 0x379877b1
+ (id)appPunchOutWithDictionary:(id)dictionary context:(id)context;	// 0x379877f5
// declared property getter: - (id)alternativePunchOut;	// 0x37987841
// declared property getter: - (id)appDisplayName;	// 0x379878d1
// declared property getter: - (id)appIcon;	// 0x3798793d
// declared property getter: - (BOOL)appInstalled;	// 0x379879cd
// declared property getter: - (id)bundleId;	// 0x37987a89
- (id)encodedClassName;	// 0x379877a5
- (id)groupIdentifier;	// 0x37987795
// declared property getter: - (id)punchOutName;	// 0x37987af5
// declared property getter: - (id)punchOutUri;	// 0x37987b61
- (BOOL)requiresResponse;	// 0x37987c3d
// declared property setter: - (void)setAlternativePunchOut:(id)anOut;	// 0x37987895
// declared property setter: - (void)setAppDisplayName:(id)name;	// 0x379878ed
// declared property setter: - (void)setAppIcon:(id)icon;	// 0x37987991
// declared property setter: - (void)setAppInstalled:(BOOL)installed;	// 0x37987a45
// declared property setter: - (void)setBundleId:(id)anId;	// 0x37987aa5
// declared property setter: - (void)setPunchOutName:(id)name;	// 0x37987b11
// declared property setter: - (void)setPunchOutUri:(id)uri;	// 0x37987bdd
@end
