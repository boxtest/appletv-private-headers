/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCoding> {
}
@property(readonly, assign, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x31dede89; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x31dee085; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x31dede81; 
+ (BOOL)canFilterByProperty:(id)property;	// 0x31dee0b1
- (id)initWithCoder:(id)coder;	// 0x31dedf7d
- (void)encodeWithCoder:(id)coder;	// 0x31dedf05
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x31dee009
// declared property getter: - (id)mediaLibrary;	// 0x31dede89
// declared property getter: - (unsigned long long)persistentID;	// 0x31dee085
// declared property getter: - (id)representativeItem;	// 0x31dede81
- (id)valueForProperty:(id)property;	// 0x31dede85
@end
