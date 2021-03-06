/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AudioData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int pid;	// 8 = 0x8
	int audioFormat;	// 12 = 0xc
	int channelCount;	// 16 = 0x10
	int sampleCount;	// 20 = 0x14
	NSString *audioLanguageCode;	// 24 = 0x18
}
- (id)initWithBuffer:(id)buffer;	// 0x45b7b5
- (void)dealloc;	// 0x45b95d
- (int)getAudioFormat;	// 0x45b91d
- (id)getAudioLanguageCode;	// 0x45b94d
- (int)getChannelCount;	// 0x45b92d
- (int)getFlags;	// 0x45b8fd
- (int)getPID;	// 0x45b90d
- (int)getSampleCount;	// 0x45b93d
@end

