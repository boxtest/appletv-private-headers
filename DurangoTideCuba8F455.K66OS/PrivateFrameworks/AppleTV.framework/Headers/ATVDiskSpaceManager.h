/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library


@interface ATVDiskSpaceManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x30645acd
+ (id)singleton;	// 0x30645ac1
- (id)init;	// 0x30645b0d
- (id)_volumeSizeStringForSize:(unsigned long long)size;	// 0x30645b39
- (void)dealloc;	// 0x30645ae1
- (unsigned long long)mediaCapacity;	// 0x30645efd
- (id)mediaCapacityString;	// 0x30645da5
- (unsigned long long)mediaFreeSpace;	// 0x30645e71
- (id)mediaFreeSpaceString;	// 0x30645d79
- (unsigned long long)primaryStreamedMediaRepositorySize;	// 0x30645e0d
- (unsigned long long)primaryStreamedMediaRespositoryMaxFileSize;	// 0x30645de5
- (unsigned long long)shortContentStreamedMediaRepositorySize;	// 0x30645ad9
- (unsigned long long)shortContentStreamedMediaRespositoryMaxFileSize;	// 0x30645dd1
@end
