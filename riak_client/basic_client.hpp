/*  
 Copyright 2011 Basho Technologies, Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#ifndef RIAKCXX_BASIC_CLIENT_HPP_
#define RIAKCXX_BASIC_CLIENT_HPP_

#include <riak_client/riak_client_fwd.hpp>
#include <riak_client/riak_result.hpp>
#include <riak_client/response.hpp>
#include <riak_client/riak_object.hpp>
#include <riak_client/store_params.hpp>
#include <cstddef>

namespace riak
{

typedef uint32_t client_id_t;

class RIAKC_API basic_client
{
public:
    virtual response<bool>       
        ping() = 0;
    virtual response<result_ptr> 
        fetch(const std::string& bucket, const std::string& key, int r) = 0;
    virtual response<bool>       
        del(const std::string& bucket, const std::string& key, int dw) = 0;
    virtual response<client_id_t> 
        client_id() = 0;
    virtual response<bool> 
        client_id(client_id_t client_id) = 0;
    virtual response<result_ptr> 
        store(object_ptr object, const store_params& params) = 0;
};

enum RIAKC_API protocol
{
    PBC
};

RIAKC_API client_id_t tss_client_id();


RIAKC_API client_ptr new_client(const std::string& host,
        const std::string& port, const protocol protocol = PBC);

} // :: riak

#endif // include guard
