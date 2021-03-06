/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSURL, SAUIAppPunchOut, NSString;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *fullsize;	// G=0x326dd7bd; S=0x326dd839; 
@property(copy, nonatomic) NSString *identifier;	// G=0x326dd899; S=0x326dd8b5; 
@property(retain, nonatomic) SAUIAppPunchOut *photoPunchOut;	// G=0x326dd905; S=0x326dd949; 
@property(copy, nonatomic) NSURL *thumbnail;	// G=0x326dd985; S=0x326dda01; 
+ (id)photo;	// 0x326dd72d
+ (id)photoWithDictionary:(id)dictionary context:(id)context;	// 0x326dd771
- (id)encodedClassName;	// 0x326dd721
// declared property getter: - (id)fullsize;	// 0x326dd7bd
- (id)groupIdentifier;	// 0x326dd711
// declared property getter: - (id)identifier;	// 0x326dd899
// declared property getter: - (id)photoPunchOut;	// 0x326dd905
// declared property setter: - (void)setFullsize:(id)fullsize;	// 0x326dd839
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326dd8b5
// declared property setter: - (void)setPhotoPunchOut:(id)anOut;	// 0x326dd949
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x326dda01
// declared property getter: - (id)thumbnail;	// 0x326dd985
@end

