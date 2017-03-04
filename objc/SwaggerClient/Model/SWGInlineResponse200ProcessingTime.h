#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* OpenALPR Cloud API
* No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/



@protocol SWGInlineResponse200ProcessingTime
@end

@interface SWGInlineResponse200ProcessingTime : SWGObject

/* Time spent processing all tasks (in milliseconds) [optional]
 */
@property(nonatomic) NSNumber* total;
/* Time spent performing license plate recognition (in milliseconds) [optional]
 */
@property(nonatomic) NSNumber* plates;
/* Time spent performing vehicle recognition (in milliseconds) [optional]
 */
@property(nonatomic) NSNumber* vehicles;

@end
