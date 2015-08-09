/**
 @author Contributions from the community; see CONTRIBUTORS.md
 @date 2005-2015
 @copyright MPL2; see LICENSE.txt
*/

#import <Cocoa/Cocoa.h>
#import "DKHandle.h"

@interface DKOnPathPointHandle : DKHandle
@end

@interface DKLockedOnPathPointHandle : DKOnPathPointHandle
@end

@interface DKInactiveOnPathPointHandle : DKOnPathPointHandle
@end

@interface DKOffPathPointHandle : DKOnPathPointHandle
@end

@interface DKLockedOffPathPointHandle : DKOffPathPointHandle
@end

@interface DKInactiveOffPathPointHandle : DKOffPathPointHandle
@end
