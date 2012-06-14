/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {
@private
	void *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *allMetadata;	// G=0x335c2535; 
@property(readonly, assign, nonatomic) NSString *key;	// G=0x335c4c31; 
@property(readonly, assign, nonatomic) NSString *keyspace;	// G=0x335c4bf9; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x335c4ad5; 
@property(readonly, assign, nonatomic) id value;	// G=0x335c4b25; 
- (id)init;	// 0x335c4d5d
- (id)_initWithMetadataDictionary:(id)metadataDictionary;	// 0x335c4cd1
// declared property getter: - (id)allMetadata;	// 0x335c2535
- (void)dealloc;	// 0x335c4c69
// declared property getter: - (id)key;	// 0x335c4c31
// declared property getter: - (id)keyspace;	// 0x335c4bf9
// declared property getter: - (double)timestamp;	// 0x335c4ad5
// declared property getter: - (id)value;	// 0x335c4b25
@end
