/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFilesystemItemCopyOperation.h"


__attribute__((visibility("hidden")))
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation {
}
+ (id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;	// 0x346ac159
+ (id)filesystemItemLinkOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x346ac181
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x346ac489
- (BOOL)_shouldLinkItemAtPath:(const char *)path toPath:(const char *)path2;	// 0x346ac365
- (BOOL)_shouldProceedAfterErrno:(int)errno linkingItemAtPath:(const char *)path toPath:(const char *)path3;	// 0x346ac209
- (BOOL)_validatePaths:(id *)paths;	// 0x346ac439
- (BOOL)shouldLinkItemAtPath:(id)path toPath:(id)path2;	// 0x346ac335
- (BOOL)shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path3;	// 0x346ac1d5
@end

